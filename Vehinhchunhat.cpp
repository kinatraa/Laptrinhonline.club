#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n, m;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        if(i == 0 || i == m-1){
            for(int j = 0; j < n; j++){
                cout << "*";
            }
        }
        else{
            for(int j = 0; j < n; j++){
                if(j == 0 || j == n-1) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}