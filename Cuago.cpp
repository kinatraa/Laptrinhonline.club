#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int a, b;
 cin >> a >> b;
 int n = a/b;
 if(a % b == 0) cout << (n-1)*(b+1);
 else{
  int ans = (n-1)*(b+1) + (a-n*b+1);
  cout << ans;
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}