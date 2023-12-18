#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

string s;
ll ans = 0;

void backtrack(int cnt, ll sum, ll index){
 if(cnt == 0){
  ll tmp = 0;
  for(int i = index; i < s.size(); i++){
   tmp = tmp*10+(s[i]-'0');
  }
  ans += (sum+tmp);
  return;
 }
 ll tmp = 0;
 for(int i = index; i < s.size()-1; i++){
  tmp = tmp*10+(s[i]-'0');
  backtrack(cnt-1, sum+tmp, i+1);
 }
}

void solve()
{
 cin >> s;
 for(int i = 0; i < s.size(); i++){
  backtrack(i, 0, 0);
 }
 cout << ans;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}