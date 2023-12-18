#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 ll a[7];
 for(ll &x : a){
  cin >> x;
 }
 sort(a,a+7);
 ll x = a[0], y = a[1], z = a[6]-x-y;
 int cnt = 0, tmp;
 for(int i = 2; i <= 5; i++){
  if(cnt == 0) tmp = x+y;
  else if(cnt == 1) tmp = x+z;
  else tmp = y+z;
  if(a[i] == z){
   continue;
  }
  if(a[i] != tmp){
   cout << -1;
   return 0;
  }
  else ++cnt;
 }
 cout << x << " " << y << " " << z;
}