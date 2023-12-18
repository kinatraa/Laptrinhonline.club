#include <bits/stdc++.h>
using namespace std;

int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int n;
 cin >> n;
 long long a[n];
 long long sum1 = 0, sum2 = -1001;
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 for(int i = 0; i < n; i++){
  sum1 += a[i];
  if(sum1 > sum2) sum2 = sum1;
  if(sum1 < 0) sum1 = 0;
 }
 cout << sum2;
}