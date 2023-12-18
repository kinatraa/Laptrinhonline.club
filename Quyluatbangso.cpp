#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int v[101][101];

void base(){
 for(int i = 1; i <= 100; i++) v[i][1] = 1;
 for(int i = 1; i <= 100; i++) v[1][i] = 1;
 for(int i = 2; i <= 100; i++){
  for(int j = 2; j <= 100; j++){
   v[i][j] = v[i-1][j] + v[i-1][j-1];
   if(v[i][j] > 1e18) v[i][j] = -1;
  }
 }
}

void solve(){
 base();
 int a, b;
 cin >> a >> b;
 if(v[a][b] < 0) cout << -1;
 else cout << v[a][b];
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}