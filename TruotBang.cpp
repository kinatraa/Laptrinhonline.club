#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

vector<string> a(205);
int n, m;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
set<pair<int,int>> res;
bool vis[205][205] = {};

void Move(int i, int j){
 for(int k = 0; k < 4; k++){
  int i1 = i, j1 = j, cnt = 0;
  while(a[i1+dx[k]][j1+dy[k]] == '.'){
   i1 += dx[k];
   j1 += dy[k];
   if(vis[i1][j1] == false){
    ++cnt;
    vis[i1][j1] = true;
   }
   res.insert({i1, j1});
  }
  if(a[i1+dx[k]][j1+dy[k]] == '#' && cnt){
   Move(i1, j1);
  }
 }
}

void solve(){
 cin >> n >> m;
 for(int i = 1; i <= n; i++){
  cin >> a[i];
  a[i] = "#" + a[i];
 }
 vis[2][2] = true;
 res.insert({2,2});
 Move(2, 2);
 // for(auto i : res){
 //  cout << i.first << " " << i.second << endl;
 // }
 cout << res.size();
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