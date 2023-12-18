#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;
const int MAXN = 5005;
 
int n;
int a[MAXN], b[MAXN], d[MAXN], s[MAXN]; 
int dp[MAXN][MAXN]; 

void solve(){
    cin >> n;
    int sum = 0; 
    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        d[i] = abs(a[i] - b[i]);
        dp[i][i] = d[i];
        sum += d[i];
    }
    for(int k = 2; k <= n; k++) { 
        for (int i = 1; i <= n - k + 1; i++) { 
            int j = i + k - 1;
            dp[i][j] = max(d[i] + min(dp[i+2][j], dp[i+1][j-1]), d[j] + min(dp[i+1][j-1], dp[i][j-2]));
        }
    }
    int ken = dp[1][n]; 
    int kun = sum - ken;
    ken %= MOD; kun %= MOD;
    cout << ken << "\n" << kun << endl; 
    if (ken > kun) cout << "Ken" << endl; 
    else if (ken < kun) cout << "Kun" << endl; 
    else cout << -1 << endl; 
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