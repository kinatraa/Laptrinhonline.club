#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 ll t;
 cin >> t;
 while(t--){
  ll n;
  cin >> n;
  if(n == 1) cout << 1 << endl;
  else{
   if(n % 2 == 0){
    cout << n/2*(n-1)+1<< endl;
   }
   else cout << (n-1)/2*n+1<< endl;
  }
 }
}