#include <iostream>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int check = 0;

void dtob(int a, int a1[]){
 for(int i = 34; i >= 0; i--){
  a1[i] = a%2;
  a/=2;
 }
}

bool test(int x, int y, int z){
 if(x*y == z) return true;
 else return false;
}

void backtrack(int a[], int b[], int c[], int d[], int i){
 if(i == 35){
  check = 1;
  return;
 }
 if(b[i] == 1){
  if(a[i] == 0){
   if(test(1, c[i], d[i]))
    backtrack(a,b,c,d,i+1);
  }
  else{
   if(test(1, c[i], d[i]))
    backtrack(a,b,c,d,i+1);
   if(check) return;
   if(test(0, c[i], d[i]))
    backtrack(a,b,c,d,i+1);
  }
 }
 else{
  if(a[i] == 1){
   return;
  }
  else{
   if(test(0, c[i], d[i]))
    backtrack(a,b,c,d,i+1);
  }
 }
}

void solve(){
 int t, a, b, c, d;
 cin >> t;
 while(t--){
  check = 0;
  cin >> a >> b >> c >> d;
  int a1[35], b1[35], c1[35], d1[35];
  dtob(a, a1);
  dtob(b, b1);
  dtob(c, c1);
  dtob(d, d1);
  backtrack(a1,b1,c1,d1,0);
  if(check) cout << "YES\n";
  else cout << "NO\n";
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}