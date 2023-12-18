#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll power(ll mu){
    if(mu == 0) return 1;
    ll tmp = power(mu/2);
    ll res = (tmp*tmp)%MOD;
    if(mu % 2 == 1) res = (res*3)%MOD;
    return res%MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll tmp = n/3;
    if(n <= 3){
        cout << n;
        return 0;
    }
    if(n % 3 == 0){
        cout << power(tmp);
    }
    else if(n % 3 == 1){
        cout << power(tmp-1)*4%MOD;
    }
    else{
        cout << power(tmp)*2%MOD;
    }
}