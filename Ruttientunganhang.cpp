#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 ll n, m;
 cin >> m >> n;
 vector<ll> a(n);
 for (int i = 0; i < n; i++)
  cin >> a[i];
 sort(a.begin(), a.end());
 ll dp[255] = {};
 dp[0] = 1;
 for (int i = 0; i < n; i++)
 {
  for (int j = 1; j <= m; j++)
  {
   if (j >= a[i])
   {
    dp[j] += dp[j - a[i]];
   }
  }
 }
 cout << dp[m];
}