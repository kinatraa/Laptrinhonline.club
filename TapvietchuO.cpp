#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int t = 10;
    char x;
    while(t--){
        cin >> x;
        if(x == 'o') cout << "thuong\n";
        else if(x == 'O') cout << "hoa\n";
        else cout << "khong\n";
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}