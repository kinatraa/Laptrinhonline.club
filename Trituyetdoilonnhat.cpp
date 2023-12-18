#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << max(abs(a[0]+a[1]), abs(a[n-1]+a[n-2]));
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}