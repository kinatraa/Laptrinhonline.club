#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int res = 0, mot = 0, check = 0;
    for(int &x : a){
        cin >> x;
        if(check) continue;
        if(x == 0){
            ++check;
        }
        res += x;
        if(x == 1) ++mot;
    }
    if(check) cout << 0;
    else{
        if(mot == n) cout << 1;
        else cout << res - mot;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}