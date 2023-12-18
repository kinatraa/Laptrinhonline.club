#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 int a[n+5];
 for(int i = 1; i <= n; i++) cin >> a[i];
 int dp[n+5] = {0};
 int ans = INT_MIN;
 for(int i = 1; i <= n; i++){
  for(int j = 0; j < i; j++){
   if(a[j] < a[i]) dp[i] = max(dp[i], dp[j]+1);
  }
  ans = max(ans,dp[i]);
 }
 cout << ans;
}