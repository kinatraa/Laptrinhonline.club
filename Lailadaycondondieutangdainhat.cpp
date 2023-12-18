#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n+1, MOD);
    dp[0] = -MOD;
    for(int i = 0; i < n; i++){
        int j = upper_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        if(dp[j-1] < a[i] && dp[j] > a[i]){
            dp[j] = a[i];
        }
    }
    int res = 0;
    for(int i = 0; i <= n; i++){
        if(dp[i] < MOD){
            res = i;
        }
    }
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}