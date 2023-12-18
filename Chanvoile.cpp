#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;
const int MAXN = 1e7 + 5;

int a[2000006],*A = a + 100005;

void solve(){
 int n, x;
 cin >> n;
 vector<int> b(n+10, 0);
 for(int i = 1; i <= n; i++){
  cin >> x;
  b[i] = b[i-1] + (x % 2 ? - 1 : 1);
 }
 int res = 0;
 A[0] = 1; 
 int tmp = 1, id = 0;
 for(int i = 1; i <= n; i++){
  while(id < b[i]){
   ++id;
   tmp += A[id];
  }
  while(id > b[i]){
   tmp -= A[id];
   --id;
  }
  res += tmp;
  ++tmp;
  ++A[b[i]];
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