#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

ll n, m, s, t, x, y;
int a[1005][1005];
int f[1005][1005] = {0};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void bfs(){
 queue <pair<int,int>> q;
 q.push({s,t});
 a[s][t] = 0;
 f[s][t] = 0;
 while(!q.empty()){
  pair<int,int> tmp = q.front();
  q.pop();
  for(int i = 0; i < 4; i++){
   int s1 = tmp.first + dx[i];
   int t1 = tmp.second + dy[i];
   if(s1 >= 1 && s1 <= n && t1 >= 1 && t1 <= m && a[s1][t1] != 1){
    f[s1][t1] = f[tmp.first][tmp.second] + 1;
    if(s1 == x && t1 == y) return;
    q.push({s1,t1});
    a[s1][t1] = 1;
   }
  }
 }
}

int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m;
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   cin >> a[i][j];
  }
 }
 cin >> s >> t >> x >> y;
 bfs();
 if(f[x][y] == 0) cout << -1;
 else cout << f[x][y];
}