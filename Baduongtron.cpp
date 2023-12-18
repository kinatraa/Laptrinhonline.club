#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

double dis(int x1, int y1, int x2, int y2){
 return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void solve(){
 int x1, y1, r1;
 int x2, y2, r2;
 int x3, y3, r3;
 cin >> x1 >> y1 >> r1;
 cin >> x2 >> y2 >> r2;
 cin >> x3 >> y3 >> r3;
 int minr, minx, miny;
 if(r1 >= r2){
  if(r2 >= r3){
   minr = r3;
   minx = x3;
   miny = y3;
  }
  else{
   minr = r2;
   minx = x2;
   miny = y2;
  }
 }
 else{
  if(r1 >= r3){
   minr = r3;
   minx = x3;
   miny = y3;
  }
  else{
   minr = r1;
   minx = x1;
   miny = y1;
  }
 }
 int cnt = 0;
 for(int x = minx-minr+1; x < minx+minr; x++){
  for(int y = miny-minr+1; y < miny+minr; y++){
   if(dis(x,y,x1,y1) >= r1) continue;
   if(dis(x,y,x2,y2) >= r2) continue;
   if(dis(x,y,x3,y3) >= r3) continue;
   ++cnt;
  }
 }
 cout << cnt;
}

main(){
 ios_base::sync_with_stdio(false); cin.tie(0);
 solve();
}