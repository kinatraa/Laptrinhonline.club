#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 ll n, k;
 cin >> n >> k;
 vector <ll> a(n);
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 ll i = 0, j = 0, type = 0, ans = n, tmp = 1;
 map <ll,ll> m;
 while(i < n && j < n){
  if(tmp != 0){
   tmp = 0;
   if(m[a[j]] == 0){
   ++type;
   }
   ++m[a[j]];
  }
  if(type <= k){
   ans += (j-i);
   ++tmp;
   ++j;
  }
  else{
   while(i <= j){
    --m[a[i]];
    if(m[a[i]] == 0){
     ++i;
     break;
    }
    ++i;
   }
   --type;
  }
 }
 cout << ans;
}