#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll luu[100001];

ll power(ll base, ll exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent % 2 == 0)
    {
        ll temp = power(base, exponent / 2) % MOD;
        return (temp * temp) % MOD;
    }
    else
    {
        ll temp = power(base, (exponent - 1) / 2) % MOD;
        return (base * (temp * temp % MOD)) % MOD;
    }
}

void gt(ll n){
    ll res = 1;
    for(int i = 1; i <= n; i++){
        res = (res*i)%MOD;
        luu[i] = res;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    gt(100000);
    ll t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        ll tu = luu[x];
        ll mau = luu[y]*luu[x-y]%MOD;
        mau = power(mau, MOD-2);
        ll ans = tu*mau%MOD;
        cout << ans << endl;
    }
}