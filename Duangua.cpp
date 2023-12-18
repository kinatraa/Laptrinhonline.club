#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int dx[] = {-1, -1, 1, 1, -2, -2, 2, 2};
int dy[] = {2, -2, 2, -2, -1, 1, -1, 1};
int ex, ey, n;

int bfs(int i, int j){
 queue<pair<int,int>> q;
 int d[105][105];
 bool vis[105][105] = {};
 vis[i][j] = true;
 d[i][j] = 0;
 q.push({i,j});
 while(q.size()){
  int x = q.front().first;
  int y = q.front().second;
  q.pop();
  for(int k = 0; k < 8; k++){
   int x1 = x + dx[k];
   int y1 = y + dy[k];
   if(x1 < 1 || x1 > n || y1 < 1 || y1 > n || vis[x1][y1]) continue;
   d[x1][y1] = d[x][y] + 1;
   if(x1 == ex && y1 == ey) return d[x1][y1];
   vis[x1][y1] = true;
   q.push({x1,y1});
  }
 }
 return -1;
}

void solve(){
 int x1, y1, x2, y2;
 cin >> n >> x1 >> y1 >> x2 >> y2 >> ex >> ey;
 int res1, res2;
 res1 = bfs(x1,y1);
 res2 = bfs(x2,y2);
 if(res1 == -1 && res2 == -1){
  cout << 0 << endl;
 }
 else if(res1 == -1) cout << 2 << endl;
 else if(res2 == -1) cout << 1 << endl;
 else if(res1 == res2) cout << 0 << endl;
 else if(res1 > res2) cout << 2 << endl;
 else if(res1 < res2) cout << 1 << endl;
 cout << res1 << " " << res2;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}