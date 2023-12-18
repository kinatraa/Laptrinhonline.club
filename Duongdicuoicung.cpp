#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

vector<int> path;
int m, n, cnt = 0;

void backtrack(int s){
 path.push_back(s);
 if(s == n){
  ++cnt;
  for(int k : path){
   cout << k << " ";
  }
  exit(0);
 }
 if(s < n){
  path.pop_back();
  return;
 }
 for(int i = sqrt(s); i >= 1; i--){
  if(s % i == 0){
   backtrack((i-1)*(s/i+1));
  }
 }
 path.pop_back();
}

void solve()
{
 cin >> m >> n;
 backtrack(m);
 if(cnt == 0) cout << "Khong Sinh Ra Duoc";
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}