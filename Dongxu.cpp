#include <bits/stdc++.h>
using namespace std;

void kt(long long &x){
 if(x % 2 != 0) x/=2;
 else{
  for(long long i = 1; ;i++){
   if(x % 2 == 0) x/=2;
   else{
    x += (i-1);
    break;
   } 
  }
 }
 if(x < 10){
  return;
 }
 else kt(x);
}

int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 long long n;
 cin >> n;
 long long a[n];
 for(long long i = 0; i < n; i++) cin >> a[i];
 for(long long i = 0; i < n; i++){
  kt(a[i]);
  if(a[i] % 2 == 0) cout <<"y\n";
  else cout << "n\n";
 }
}