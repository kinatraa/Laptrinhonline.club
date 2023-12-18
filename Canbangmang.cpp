#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int n;
 cin >> n;
 int a[n], b[n];
 int min_a = MOD, min_b = MOD;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  min_a = min(a[i], min_a);
 }
 for(int i = 0; i < n; i++){
  cin >> b[i];
  min_b = min(b[i], min_b);
 }
 int res = 0;
 for(int i = 0; i < n; i++){
  a[i] -= min_a;
  b[i] -= min_b;
  res += max(a[i], b[i]);
 }
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