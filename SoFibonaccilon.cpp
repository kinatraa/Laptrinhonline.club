#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
 int n, luu = 0;
 cin >> n;
 vector<int> a, b, c, tmp;
 if(n == 1 || n == 2){
  cout << 1;
  return;
 }
 a.push_back(1);
 b.push_back(1);
 for(int i = 3; i <= n; i++){
  tmp = b;
  luu = 0;
  int j = 0;
  for(j = 0; j < a.size(); j++){
   b[j] += a[j];
   if(luu != 0){
    ++b[j];
   }
   luu = b[j]/10;
   b[j] %= 10;
  }
  if(luu != 0){
   while(luu != 0 && j < b.size()){
    ++b[j];
    luu = b[j]/10;
    b[j] %= 10;
    ++j;
   }
   if(luu != 0) b.push_back(1);
  }
  a = tmp;
  // for(int k = b.size()-1; k >= 0; k--){
  //  cout << b[k];
  // }
  // cout << endl;
 }
 reverse(b.begin(), b.end());
 for(int i : b){
  cout << i;
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}