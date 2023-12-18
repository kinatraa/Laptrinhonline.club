#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    int cnt[n+1][2];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[i][1] = cnt[i-1][1] + a[i] % 2;
        cnt[i][0] = cnt[i-1][0] + 1 - a[i] % 2;
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            if((cnt[j][0] - cnt[i-1][0]) >= (cnt[j][1] - cnt[i-1][1])) ++res;
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