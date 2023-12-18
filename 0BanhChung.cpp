#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, res, x;
    cin >> n;
    int a[5] = {0};
    for(int i = 0; i < n; i++){
        cin >> x;
        a[x]++;
    }
    res = a[4] + a[3] + a[2]/2;
    if(a[1] > a[3]) a[1] -= a[3];
    else a[1] = 0;
    res += (a[1]/4);
    a[1] %= 4;
    a[2] = a[2]%2*2 + a[1];
    if(a[2] > 4) res += 2;
    else if(a[2] > 0) res++;
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}