#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int dp[1001][1001];

void solve(){   
    string a;
    int k;
    cin >> a >> k;
    memset(dp, 0, sizeof(dp));
    int n = a.size();
    int res = 0;
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j < n; j++){
            dp[i][j] = dp[i+1][j-1];
            if(a[i] != a[j]) dp[i][j]++;
            if(dp[i][j] <= k) res = max(res, j-i+1);
        }
    }
    cout << res << endl;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}