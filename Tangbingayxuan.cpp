#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int n, k;
 cin >> n >> k;
 vector<int> a(n);
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 int i = 0, j = 1, sum = a[0], cnt = 1, tsum = -1;
 int x, y;
 while(i < n && j < n){
  if(sum > tsum && sum <= k){
   x = i;
   y = cnt;
   tsum = sum;
  }
  if(sum <= k){
   sum += a[j];
   ++cnt;
   ++j;
  }
  else{
   sum -= a[i];
   --cnt;
   ++i;
  }
 }
 cout << x+1 << " " << y;
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