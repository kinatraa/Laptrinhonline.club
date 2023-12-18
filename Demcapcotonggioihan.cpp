#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 long long n, m;
 cin >> n >> m;
 long long a[n];
 for(long long i = 0; i < n; i++){
  cin >> a[i];
 }
 sort(a, a+n);
 long long i = 0, j = n-1, cnt = 0;
 while(i < j){
  if(a[i] + a[j] > m){
   j--;
  }
  else{
   cnt += (j-i);
   ++i;
  }
 }
 cout << cnt;
}