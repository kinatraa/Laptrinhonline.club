#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int n, m, k;
int f[10001][10001] = {0};

int bfs(){
 queue <pair<int,int>> q;
 f[0][0] = 1;
 q.push({0,0});
 while(!q.empty()){
  int x = q.front().first, y = q.front().second;
  q.pop();
  int dx[6] = {0, x, n, x, max(0, x+y-m), min(x+y, n)};
  int dy[6] = {y, 0, y, m, min(x+y, m), max(0, x+y-n)};
  for(int i = 0; i < 6; i++){
   if(f[dx[i]][dy[i]] == 0){
    f[dx[i]][dy[i]] = f[x][y]+1;
    if(dx[i] == k || dy[i] == k) return (f[dx[i]][dy[i]]-1);
    q.push({dx[i], dy[i]});
   }
  }
 }
 return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m >> k;
 int ans = bfs();
 if(ans == -1){
  cout << "Khong dong duoc nuoc";
 }
 else cout << ans;
}