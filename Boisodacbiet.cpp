#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void bfs(int n){
 queue<ll> q;
 q.push(9);
 ll tmp = 9;
 while(!q.empty()){
  tmp = q.front(); q.pop();
  if(tmp*10 % n == 0){
   cout << tmp*10 << endl;
   return;
  }
  else q.push(tmp*10);
  if((tmp*10+9) % n == 0){
   cout << tmp*10+9 << endl;
   return;
  }
  else q.push(tmp*10+9);
 }
}

void solve()
{
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  if(9 % n == 0) cout << 9 << endl;
  else bfs(n);
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}