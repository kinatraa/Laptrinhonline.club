#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll M;

ll mul(ll a, ll b)
{
    if(log10(a) + log10(b) < 17) return a*b%M;
    if(a > b) swap(a,b);
    ll c = sqrt(b);
    return (mul(a*c%M,b/c) + mul(a,b%c))%M;
}

ll pow_mod(ll x, ll y){
 if(y == 0) return 1;
 if(y == 1) return x%M;
 ll tmp = pow_mod(x, y/2)%M;
 return mul(mul(tmp,tmp),pow_mod(x, y%2))%M;
}

int main(){
 ll t;
 cin >> t;
 while(t--){
  string a;
  ll b;
  cin >> a >> b >> M;
  ll int_a = 0;
  for(char x:a){
   int_a = (int_a*10 + x-'0')%M;
  }
  cout << pow_mod(int_a,b) << endl;
 }
}