#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll f(ll n)
{
    ll res = 0;
    for (ll x = 2; x <= n; x *= 2)
        res += n / x;

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll l, r;
    cin >> l >> r;
    cout << f(r) - f(l - 1);
}