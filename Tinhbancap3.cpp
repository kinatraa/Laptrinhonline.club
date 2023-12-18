#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int n, m, k;
vector<int> adj[105];
set<pair<int,int>> cnt;

void dfs(int u, int step, int start){
 if(step == 3){
  cnt.insert({min(u,start), max(u,start)});
  return;
 }
 for(int v : adj[u]){
  dfs(v, step+1, start);
 }
}

void solve(){
 cin >> n >> m >> k;
 int u, v;
 while(m--){
  cin >> u >> v;
  adj[u].emplace_back(v);
  adj[v].emplace_back(u);
 }
 while(k--){
  cin >> u;
  cnt.clear();
  dfs(u, 0, u);
  cout << cnt.size() << endl;
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int t = 1;
 //cin >> t;
 while(t--){
  solve();
 }
}