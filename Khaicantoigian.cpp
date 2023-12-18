#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve(){
 int n, k, cnt = 0;
 cin >> n >> k;
 int m = sqrt(n);
 int a = 1;
 int tmp = n;
 while(tmp % 2 == 0){
  ++cnt;
  tmp/=2;
  if(cnt == k){
   cnt = 0;
   a *= 2;
   n = tmp;
  }
 }
 for(int i = 3; i <= m; i+=2){
  if(i > n) break;
  cnt = 0;
  tmp = n;
  while(tmp % i == 0){
   ++cnt;
   tmp/=i;
   if(cnt == k){
    cnt = 0;
    a *= i;
    n = tmp;
   } 
  }
 }
 cout << a << " " << n;
}

main(){
 ios_base::sync_with_stdio(false); cin.tie(0);
 solve();
}