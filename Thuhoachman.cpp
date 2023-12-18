#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n+1);
    ll ans = 0;
    for(int i = 1; i <= n+1; i++){
        if(i != n+1) cin >> a[i];
        if(i == 1){
            ans += min(a[i], m);
            a[i] = max(0, a[i]-m);
            continue;
        }
        if(i == n+1){
            ans += min(a[n], m);
            break;
        }
        ans += min(a[i-1]+a[i], m);
        a[i] -= (a[i-1] <= m) ? (m - a[i-1]) : 0;
        a[i] = max(a[i], 0);
    }
    cout << ans;
}