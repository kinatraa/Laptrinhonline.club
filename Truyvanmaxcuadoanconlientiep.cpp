#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int n, m, l, r;
 cin >> n >> m;
 vector<int> a(n);
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 vector<vector<int>> table(18, vector<int>(n));
 table[0] = a;
 for(int i = 1; (1LL<<i) <= n; i++){
  for(int j = 0; j+(1LL<<i) <= n; j++){
   table[i][j] = max(table[i-1][j], table[i-1][j+(1LL<<(i-1))]);
  }
 }
 while(m--){
  cin >> l >> r;
  --l, --r;
  int i = (int)log2(r-l+1);
  cout << max(table[i][l], table[i][r-(1LL<<i)+1]) << endl;
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