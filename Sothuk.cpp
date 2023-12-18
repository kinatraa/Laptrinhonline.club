#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    cout << k+(k-1)/(n-1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}