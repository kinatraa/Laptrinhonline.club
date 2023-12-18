#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int a[200001][20];

void solve(){
    int n = 0;
 int x;
 int res = 0;
 memset(a, 0, sizeof(a));
 while(cin >> x){
  if(x == -1) break;
  for(int i = 19; i >= 0; i--){
   a[n][i] = x%10;
   x/=10;
  }
  if(n > 0){
   for(int i = 0; i < 20; i++){
    if(a[n][i] > a[n-1][i]) a[n][i] = 0;
    if(a[n][i] < a[n-1][i]) break;
   }
  }
  for(int i = 0; i < 20; i++){
   x *= 10;
   x += a[n][i];
  }
  res += x;
  n++;
 }
 cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}