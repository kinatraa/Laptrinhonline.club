#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
ll mod = 1000000007;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int t;
 cin >> t;
 while (t--)
 {
  ll n;
  cin >> n;
  ll sum;
  if(n % 3 == 0){
   if(n % 2 != 0) sum = (((n/3)%mod)*(((n+1)/2)%mod)%mod)*((n+2)%mod)%mod;
   else sum = (((n/6)%mod)*((n+1)%mod)%mod)*((n+2)%mod)%mod;
  }
  else if(n % 3 == 1){
   if(n % 2 == 0) sum = ((n%mod)*((n+1)%mod)%mod)*(((n+2)/6)%mod)%mod;
   else sum = ((n%mod)*((n+1)/2%mod)%mod)*(((n+2)/3)%mod)%mod;
  }
  else if(n % 3 == 2){
   if(n % 2 == 0) sum = (((n/2)%mod)*(((n+1)/3)%mod)%mod)*((n+2)%mod)%mod;
   else sum = ((n%mod)*(((n+1)/6)%mod)%mod)*((n+2)%mod)%mod;
  }
  cout << (sum%mod)%mod << endl;
  sum = 0;
 }
}