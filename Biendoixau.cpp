#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin >> a >> b;
    int i, j, cnt = 0;
    int dp[1001][1001];
    for(i = 0; i <= a.size(); i++) dp[i][0] = i;
    for(i = 0; i  <= b.size(); i++) dp[0][i] = i;
    for(i = 1; i <= a.size(); i++){
      for(j = 1; j <= b.size(); j++){
        if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
        else{
          dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
        } 
      }
     }
    cout << dp[a.size()][b.size()];
}