#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

ll power(ll a, ll b){
 if(b == 0) return 1;
 if(b == 1) return a%MOD;
 ll tmp = power(a, b/2);
 return tmp*tmp%MOD*power(a,b%2)%MOD;

}

ll div_mod(ll a, ll b){
 return a%MOD * power(b,MOD-2) % MOD;
}

void solve()
{
    ll a, n;
 cin >> a >> n;
 ll res = 1;
 a = (a + MOD*MOD)%MOD;
 for(ll i = 1; i <= n; i++){
  res = res*((a+i)%MOD)%MOD;
  res = div_mod(res,i);
 }
 cout << res%MOD;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}