#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int c[n+2][2];
    memset(c, 0, sizeof(c));
    int k = 0;
    for(int i = 1; i <= n+1; i++){
        int j;
        for(j = 1; j < i; j++){
            c[j][k] = c[j-1][1-k]+c[j][1-k];
            cout << c[j][k] << " ";
        }
        c[j][k] = 1;
        cout << c[j][k] << endl;
        k = 1-k;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}