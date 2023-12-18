#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 ll x, GCD, cnt = 0;
 vector<ll> a;
 while(cin >> x){
  a.push_back(x);
 }
 for(int i = 1; i < a.size(); i++){
  if(i == 1) GCD = a[i] - a[i-1];
  else{
   if(a[i]-a[i-1] == 0){
    cout << 0;
    exit(0);
   }
   GCD = __gcd(GCD, (a[i]-a[i-1]));
  }
 }
 for(int i = 1; i < a.size(); i++){
  cnt += ((a[i]-a[i-1])/GCD - 1);
 }
 cout << cnt;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}