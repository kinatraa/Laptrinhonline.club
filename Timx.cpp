#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 string a;
 cin >> a;
 int x[2], cnt = 0;
 char dau;
 for(char c : a){
  if(c >= '0' && c <= '9'){
   x[cnt] = c-'0';
   ++cnt;
  }
  else{
   if(c == '-' || c == '+'){
    dau = c;
   }
  }
 }
 if(a[0] == 'x'){
  if(dau == '-'){
   cout << "x=" << x[0]+x[1];
  }
  else{
   if(x[0] > x[1]) cout << "Khong tim duoc x";
   else cout << "x=" << x[1]-x[0];
  }
 }
 else{
  if(dau == '-'){
   if(x[0] < x[1]) cout << "Khong tim duoc x";
   else cout << "x=" << x[0]-x[1];
  }
  else{
   if(x[0] > x[1]) cout << "Khong tim duoc x";
   else cout << "x=" << x[1]-x[0];
  }
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}