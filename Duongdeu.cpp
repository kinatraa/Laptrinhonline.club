#include <iostream>
#include <unordered_map>
using namespace std;
#define int long long
const long mod = 1e9 + 7;
#pragma GCC optimize ("unroll-loops")
#pragma GCC target ("avx2")

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        if (hash1 != hash2) {
            return hash1 ^ hash2;              
        }
        return hash1;
    }
};

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, m;
 cin >> n >> m;
 int a[n][m] = {}, res[n][m] = {};
 int i, j;
 for(i = 0; i < n; ++i)
 {
  for (j = 0; j < m; j++)
   cin >> a[i][j];
 }
 for (i = 0; i < m; ++i) res[0][i] = 1;
 unordered_map<pair<int, int>, int, hash_pair> cost;
 for (j = m - 1; j >= 0; --j)
  for (i = 0; i < n; ++i)
  {
   res[i][j] += cost[{i - 1, a[i][j]}];
   res[i][j] %= mod;
   if (!res[i][j]) continue;
   cost[{i, a[i][j]}] =  (cost[{i, a[i][j]}] + res[i][j]) % mod;
  }
 int ans = 0;
 for (i = 0; i < m; ++i)
  ans = (ans + res[n - 1][i]) % mod;
 printf("%lld", ans);
}