#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int pow_mod(int x, int exp){
 if(exp == 0) return 1;
 int tmp = pow_mod(x,exp/2)%MOD;
 int res = tmp*tmp%MOD;
 if(exp&1) res = res*x%MOD;
 return res;
}

void solve(){
 int n, l;
 cin >> n >> l;
 ++n;
 int tu = pow_mod(4,n)-1;
 tu %= MOD;
 int mau = pow_mod(3,MOD-2)%MOD;
 int res = l*l%MOD*tu%MOD*mau%MOD;
 cout << res;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int t = 1;
 //cin >> t;
 while(t--){
  solve();
 }
}