#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, res = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) ++res;
    }
    if(res == n){
        cout << res-1;
        return;
    }
    int b[n+1] = {0};
    int MAX = INT_MIN;
    for(int i = 1; i <= n; i++){
        if(a[i-1] == 1){
            b[i] = max(b[i-1]-1, (int)0);
        }
        else b[i] = b[i-1]+1;
        MAX = max(MAX, b[i]);
    }
    cout << res + MAX;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}