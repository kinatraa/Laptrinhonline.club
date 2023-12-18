#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = dp[3] = 0;
    for(int i = 4; i <= n; i++){
        dp[i] = ((i+1)*dp[i-1]%MOD - (i-2)*dp[i-2]%MOD - (i-5)*dp[i-3]%MOD + (i-3)*dp[i-4]%MOD)%MOD;
    }
    cout << (dp[n]+MOD)%MOD;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}