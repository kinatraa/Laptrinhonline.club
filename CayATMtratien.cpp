#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 int n, m;
 cin >> n >> m;
 int a[n+1];
 for(int i = 1; i <= n; i++){
  cin >> a[i];
 }
 sort(a, a+n);
 int dp[n+5][m+5];
 for(int i = 1; i < n+5; i++) dp[i][0] = 0;
 for(int i = 1; i < m+5; i++) dp[0][i] = INT_MAX;
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   dp[i][j] = dp[i-1][j];
   if(j >= a[i] && dp[i][j] >= 1 + dp[i][j-a[i]]){
    dp[i][j] = 1 + dp[i][j-a[i]];
   }
  }
 }
 if(dp[n][m] == INT_MAX){
  cout << "ATM khong the tra tien";
  return 0;
 }
 cout << dp[n][m];
}