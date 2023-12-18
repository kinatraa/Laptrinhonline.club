#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve()
{
 int n;
 cin >> n;
 vector<pair<int,int>> a(n);
 for (auto &i : a)
  cin >> i.second >> i.first;
 sort(a.begin(), a.end());
 int x = INT_MIN, y = INT_MIN, cnt = 0;
 for (auto i : a)
 {
  if (x < y)
   swap(x, y);
  if (i.second > x)
  {
   ++cnt;
   x = i.first;
  }
  else if (i.second > y)
  {
   ++cnt;
   y = i.first;
  }
 }
 cout << cnt << endl;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int t = 1;
 cin >> t;
 while (t--)
 {
  solve();
 }
}