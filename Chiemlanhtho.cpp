#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int t;
 cin >> t;
 int w, h, x, y, xr, yr;
 char c;
 while(t--){
  cin >> w >> h >> x >> y >> c;
  if(c == 'U'){
   yr = y-1;
   if(yr > (h-yr)) cout << "RED" << endl;
   else if(yr < (h-yr)) cout << "BLUE" << endl;
   else cout << "DRAW" << endl;
  }
  else if(c == 'D'){
   if(y < (h-y)) cout << "RED" << endl;
   else if(y > (h-y)) cout << "BLUE" << endl;
   else cout << "DRAW" << endl;
  }
  else if(c == 'L'){
   xr = x-1;
   if(xr > (w-xr)) cout << "RED" << endl;
   else if(xr < (w-xr)) cout << "BLUE" << endl;
   else cout << "DRAW" << endl;
  }
  else{
   if(x < (w-x)) cout << "RED" << endl;
   else if(x > (w-x)) cout << "BLUE" << endl;
   else cout << "DRAW" << endl;
  }
 }
}