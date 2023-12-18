#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll power(ll base, ll exp){
    if(exp == 1) return base%MOD;
    if(exp == 0) return 1;
    ll tmp = power(base, exp/2) % MOD;
    if(exp & 1) return tmp%MOD*tmp%MOD*base%MOD;
    else return tmp%MOD*tmp%MOD;
}

void solve(){
    string a, b;
    cin >> a >> b;
    ll x = 0, y = 0;
    for (auto c : a) {
        x = (x * 10 + (c - '0')) % MOD;
    }
    for (auto c : b) {
        y = (y * 10 + (c - '0')) % (MOD-1);
    }
    ll res = power(x, y);
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    solve();
}