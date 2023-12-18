#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int graph[16][16];
bool vis[16] = {};
int n, ans = INT_MAX;

void backtrack(int step, int i, int res){
 if(step == n){
  res += graph[i][1];
  ans = min(ans,res);
  return;
 }
 for(int j = 1; j <= n; j++){
  if(i == j || vis[j] == true) continue;
  vis[j] = true;
  backtrack(step+1, j, res+graph[i][j]);
  vis[j] = false;
 }
}

void solve()
{
 cin >> n;
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= n; j++){
   cin >> graph[i][j];
  }
 }
 vis[1] = true;
 backtrack(1,1,0);
 cout << ans;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}