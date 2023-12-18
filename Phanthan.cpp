#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int m = 1;
    int cnt = 0;
    while(m <= INT64_MAX){
        if(m >= n){
            cout << cnt;
            return;
        }
        ++cnt;
        m *= 2;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}