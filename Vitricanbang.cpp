#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int cnt = 0;
 ll n, r = 0;
 cin >> n;
 ll a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
  r += a[i];
 }
 ll l = 0;
 for(int i = 0; i < n; i++){
  if(i == 0){
   l += a[i];
  }
  else{
   l += a[i];
   r -= a[i-1];
  }
  if(l == r){
   cout << i+1 << endl;
   ++cnt;
  }
 }
 cout << cnt;
}