#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;
int calc(int n){
    if(n == 0) return 0;
    int tmp;
    if(n & 1) tmp = (n+1)/2*(n+1)/2;
    else tmp = n/2*n/2;
    return tmp + calc(n/2);
}


void solve(){
    int a, b;
    cin >> a >> b;
    cout << calc(b) - calc(a-1) << endl;
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