#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, x;
 cin >> n >> x;
 int a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 sort(a,a+n);
 int cnt = 0, tmp = 1;
 for(int i = n-1; i >= 0; i--){
  if(a[i]*tmp >= x){
   ++cnt;
   tmp = 1;
  } 
  else{
   ++tmp;
  }
 }
 cout << cnt;
}