#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int main(){
 long long k, l;
 cin >> l >> k;
 long long n;
 cin >> n;
 long long a[n];
 for(long long i = 0; i < n; i++) cin >> a[i];
 sort(a, a+n);
 long long tmp = 0, cnt = 0;
 for(long long i = 0; i < n; i++){
  if(a[i] > tmp){
   ++cnt;
   tmp = a[i] + k - 1;
  } 
 }
 cout << cnt;
}