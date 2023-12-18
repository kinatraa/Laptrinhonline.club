#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 ll a[n];
 for(int i = 0; i < n; i++) cin >> a[i];
 cout << a[0] << " ";
 bool check[n] = {false};
 check[0] = true;
 for(int i = 1; i < n; i++){
  int tmp = 0;
  for(int j = i-1; j >= 0; j--){
   if(a[j] >= a[i]){
    ++tmp;
    break;
   } 
   else{
    if(check[j]) break;
   }
  }
  if(tmp == 0) cout << a[i] << " ";
 }
}