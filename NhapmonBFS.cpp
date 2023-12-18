#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, x2, y2;
int a[1001][1001] = {0};
bool visited[1001][1001];
int dx[8] = {1, 2, -1, -2, 1, -2, 2, -1};
int dy[8] = {2, 1, -2, -1, -2, 1, -1, 2};
int d[1001][1001];
int cnt = 0;

// bool dfs(int i, int j){
//  if(i == x2 && j == y2) return true;
//  a[i][j]++;
//  for(int k = 0; k < 8; k++){
//   int u = i + dx[k];
//   int v = j + dy[k];
//   if(u >= 1 && v >= 1 && u <= n && v <= m && a[u][v] != 0){
//    if(dfs(u,v)) return true;
//   }
//  }
//  return false;
// }

void bfs(int i, int j)
{
 queue<pair<int, int>> q;
 q.push({i, j});
 visited[i][j] = true;
 d[i][j] = 0;
 while (!q.empty())
 {
  pair<int, int> top = q.front();
  q.pop();
  for (int k = 0; k < 8; k++)
  {
   int i1 = top.first + dx[k];
   int j1 = top.second + dy[k];
   if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !visited[i1][j1])
   {
    d[i1][j1] = d[top.first][top.second] + 1;
    visited[i1][j1] = true;
    if (i1 == x2 && j1 == y2)
     return;
    q.push({i1, j1});
    
   }
  }
 }
}

void nhap()
{
 cin >> n >> m;
 cin >> x >> y >> x2 >> y2;
 memset(visited, false, sizeof(visited));
 bfs(x, y);
 if (d[x2][y2] == 0)
  cout << "-1";
 else
  cout << d[x2][y2];
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 nhap();
}