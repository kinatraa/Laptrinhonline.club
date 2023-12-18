#include <bits/stdc++.h>
using namespace std;

int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 long long n, q;
 cin >> n >> q;
 long long a[q];
 for(int i = 0; i < q; i++){
  cin >> a[i];
 }
 for(int i = 0; i < q; i++){
  long long hang = (a[i]-1)/n + 1;
  long long mid = ((hang-1)*(n+1)+1);
  if(a[i] > mid){
   long long x = (a[i]-mid)*n + mid;
   cout << x << " ";
  }
  else if(a[i] < mid){
   mid = ((hang-1)*(n-1) + 1);
   long long x = (a[i]-mid)/n + mid;
   cout << x << " ";
  }
  else cout << a[i] << " ";
 }
}