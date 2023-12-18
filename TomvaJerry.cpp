#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int q;
 cin >> q;
 int x, y, a, z, t, b, dis;
 while(q--){
  cin >> x >> y >> a >> z >> t >> b;
  dis = abs(z-x) + abs(t-y);
  if(a >= dis){
   cout << 1 << endl;
   continue;
  }
  if(a > b*2) cout << 1;
  else cout << 0;
  cout << endl;
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}