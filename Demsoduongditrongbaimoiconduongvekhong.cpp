#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const long MOD = 1e9 + 7;

map<ll,ll> save;

ll backtrack(int n){
 if(save.find(n) != save.end()) return save[n];
 if(n == 0){
  save[n] = 1;
  return 1;
 }
 ll cnt = 0;
 for(int i = 1; i <= sqrt(n); i++){
  if(n % i == 0){
   cnt = (cnt+backtrack((i-1)*(n/i+1)))%MOD;
  }
 }
 save[n] = cnt;
 return cnt;
}

void solve()
{
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  cout << backtrack(n) << endl;
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}