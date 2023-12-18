#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int t, n;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        cout << "Test Case #" << i << ": ";
        if(n % 2 == 0) cout << "Atreus\n";
        else cout << "Kratos\n";
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}