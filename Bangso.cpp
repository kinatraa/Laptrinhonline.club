#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int a[1001][1001];
int dp[1001][1001];
ll ans = INT64_MIN;
int n, m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    memset(dp, INT32_MIN, 1001*1001);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 && j == 0){
                dp[i][j] = a[i][j];
                continue;
            }
            if(i == 0){
                dp[i][j] = a[i][j] + dp[i][j-1];
            }
            else if(j == 0){
                dp[i][j] = a[i][j] + dp[i-1][j];
            }
            else{
                dp[i][j] = a[i][j] + max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    cout << dp[n-1][m-1];
}