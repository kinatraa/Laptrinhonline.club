#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 ll t, x, n;
 cin >> t;
 while(t--){
  cin >> x >> n;
  double a, b, c, delta, m;
  m = n+x;
  a = m-x;
  b = (x-1)*(x-1) - 2*x*(x-1) - (m-1)*(m-1) + 2*m*(m-1);
  c = x*(x-1)*(x-1) - m*(m-1)*(m-1);
  delta = b*b - 4*a*c;
  ll res = ceil((-b + sqrt(delta)) / (2.00*a));
  cout << res-x+1 << endl;
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}