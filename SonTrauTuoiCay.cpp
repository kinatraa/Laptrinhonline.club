#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const long MOD = 1e9 + 7;

void solve()
{
 int t;
 cin >> t;
 while(t--){
  ll n, x, r;
  cin >> n;
  vector<pair<ll,ll>> a(n);
  for(int i = 0; i < n; i++){
   cin >> x >> r;
   a[i] = make_pair(x-r,x+r);
  }
  sort(a.begin(), a.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
   if(a.first == b.first) return a.second < b.second;
   else return a.first < b.first;
     });
  ll dau = a[0].first, cuoi = a[0].second;
  ll sum = 0;
  for(int i = 1; i < n; i++){
   if(a[i].first > cuoi){
    sum += (cuoi-dau);
    dau = a[i].first;
    cuoi = a[i].second;
   }
   else{
    cuoi = (a[i].second > cuoi)? a[i].second : cuoi;
   }
  }
  sum += (cuoi-dau);
  cout << sum << endl;
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}