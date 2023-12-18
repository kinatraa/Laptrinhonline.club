#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k, ans = 0;
    cin >> n >> k;
    vector <ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ans += (a[i]/k);
    }
    cout << ans*3*k;
}