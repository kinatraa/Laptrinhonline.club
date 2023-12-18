#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1, 0);
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a[i] = a[i-1]+x;
    }
    sort(a.begin(), a.end());
    cout << abs(a[n]-a[0]) << " ";
    int MIN = INT64_MAX;
    for(int i = 1; i <= n; i++){
        MIN = min(MIN, abs(a[i]-a[i-1]));
    }
    cout << MIN;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}