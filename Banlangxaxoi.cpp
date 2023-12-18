#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int a[n+1][n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[0][i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1 ; j <= n; j++){
            cin >> a[i][j];
        }
    }
    vector<int> ans(n+1, MOD);
    bool check[n+1] = {};
    ans[0] = 0;
    for(int i = 1; i <= n; i++){
        int MIN = MOD;
        int index = -1;
        for(int j = 0; j <= n; j++){
            if(!check[j] && ans[j] < MIN){
                MIN = ans[j];
                index = j;
            }
        }
        check[index] = true;
        for(int j = 1; j <= n; j++){
            if(!check[j] && ans[j] > a[index][j]){
                ans[j] = a[index][j];
            }
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i++) res += ans[i];
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}