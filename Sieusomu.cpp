#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int pow_mod(int exp){
 if(exp == 0) return 1;
 if(exp == 1) return 2;
 int tmp = pow_mod(exp/2)%MOD;
 int res = tmp*tmp%MOD;
 if(exp % 2 == 1) res = res*2%MOD;
 return res;
}

void solve(){
 int n;
 cin >> n;
 if(n == 1){
  cout << 1;
  return;
 }
 if(n == 2 || n == 3){
  cout << 2;
  return;
 }
 int res = pow_mod(n-2);
 cout << res;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}