#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin >> m;
    ll a[m][3];
    ll dp[m][3] = {0};
    for(int i = 0; i < m; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            if(i == 0){
                dp[0][j] = a[0][j];
            }
        }
        if(i == 0) continue;
        dp[i][0] = max(a[i][0]+dp[i-1][1], a[i][0]+dp[i-1][2]);
        dp[i][1] = max(a[i][1]+dp[i-1][0], a[i][1]+dp[i-1][2]);
        dp[i][2] = max(a[i][2]+dp[i-1][1], a[i][2]+dp[i-1][0]);
    }
    cout << max(dp[m-1][0], max(dp[m-1][1], dp[m-1][2]));
}