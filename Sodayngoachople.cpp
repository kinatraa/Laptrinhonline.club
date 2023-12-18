#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int pow_mod(int x, int exp){
 if(exp == 0) return 1;
 int tmp = pow_mod(x, exp/2)%MOD;
 int res = tmp*tmp%MOD;
 if(exp & 1) res = res*x%MOD;
 return res;
}

int f[1000005];

void gt(){
 int s = 1;
 f[0] = 1;
 for(int i = 1; i <= 1000000; i++){
  s = s*i%MOD;
  f[i] = s;
 }
}

void solve(){
 gt();
 int n;
 cin >> n;
 if(n & 1) cout << 0;
 else{
  n /= 2;
  int tu = f[2*n];
  int mau = f[n]*f[n+1]%MOD;
  int res = tu*pow_mod(mau, MOD-2)%MOD;
  cout << res;
 }
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