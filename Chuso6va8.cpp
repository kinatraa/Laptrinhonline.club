#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

ll n, m = 1e5;

void bfs(){
 queue <ll> q;
 q.push(0);
 while(m--){
  ll tmp = q.front();
  q.pop();
  if((tmp*10+6) % n == 0){
   cout << (tmp*10+6);
   return;
  }
  else q.push(tmp*10+6);
  if((tmp*10+8) % n == 0){
   cout << (tmp*10+8);
   return;
  }
  else q.push(tmp*10+8);
 }
 
}

int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n;
 if(n % 5 == 0){
  cout << 0;
  return 0;
 }
 bfs();
}