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
 ll n, m;
 cin >> n >> m;
 ll ans = 1;
 if(n % 2 == 0){
  ans *= ((n/2)%MOD)*((n+1)%MOD)%MOD;
 }
 else ans *= (n%MOD)*((n+1)/2%MOD)%MOD;
 if(m % 2 == 0){
  ans *= ((m/2)%MOD)*((m+1)%MOD)%MOD;
 }
 else ans *= (m%MOD)*((m+1)/2%MOD)%MOD;
 cout << ans%MOD;
}