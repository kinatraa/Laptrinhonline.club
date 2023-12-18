#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 vector <int> a(n);
 for(int i = 0; i < n; i++) cin >> a[i];
 sort(a.begin(), a.end());
 if(n == 1){
  cout << a[0] - a[0]/3;
 }
 else if(n == 2){
  cout << a[0]-a[0]/3+a[1]-a[1]/3;
 }
 else{
  int i = n-1, sum = 0;
  while(i >= 2){
   int tmp = a[i]/3+a[i-1]/3+a[i-2]/3;
   if(tmp <= a[i-2]){
    sum += (a[i]+a[i-1]);
   }
   else{
    sum += (a[i]+a[i-1]+a[i-2]-tmp);
   }
   i-=3;
  }
  while(i >= 0){
   sum += (a[i]-a[i]/3);
   i--;
  }
  cout << sum;
 }
}