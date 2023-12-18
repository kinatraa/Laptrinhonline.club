#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            dp[j] += dp[j-i];
            dp[j] %= MOD;
        }
    }
    cout << dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}