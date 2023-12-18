#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int a = ceil((sqrt(8*n+9)-1)/2);
    int b = n - a*(a-1)/2 + 1;
    if(a % 2 == 0){
        cout << b << " " << abs(a-b+1);
    }
    else cout << abs(a-b+1) << " " << b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}