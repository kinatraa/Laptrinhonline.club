#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int a[n+2];
    for (int i = 0; i < n; i ++) cin >> a[i];
    sort(a, a+n);
    int mid = a[n/2];
    int res = 0;
    for (int i = 0; i < n; i ++) 
        res += abs(a[i]-mid);
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}