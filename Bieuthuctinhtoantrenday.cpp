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
 ll n;
 cin >> n;
 ll a[n];
 ll s1 = 0, s2 = 0, s3 = 0;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  s1 += pow(a[i],2);
  if(i != 0){
   s3 += (a[i]*a[i-1]);
  }
 } 
 for(int i = 0; i < n ; i++){
  s2 += a[i]*a[n-i-1];
 }
 cout << s1 << endl << s2 << endl << s3;
}