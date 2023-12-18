#include <iostream>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 string a;
 cin >> a;
 int n = a.size();
 string x, y;
 int i, j;
 for(i = n-1; i >= 1; --i){
  x = a.substr(0, i);
  y = a.substr(n-i, i);
  if(x != y) continue;
  for(j = 1; j < n-i; ++j){
   if(x == a.substr(j, i)){
    cout << x;
    return;
   }
  }
 }
 cout << "Just a legend";
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}