#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int n, m;
int a[205][205];
int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
bool visited[205][205] = {};

int bfs(int i, int j){
 queue <pair<int,int>> q;
 q.push({i,j});
 visited[i][j] = true;
 int cnt = 1;
 while(!q.empty()){
  pair<int,int> tmp = q.front();
  q.pop();
  for(int k = 0; k < 8; k++){
   int i1 = tmp.first + dx[k];
   int j1 = tmp.second + dy[k];
   if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visited[i1][j1] != true && a[i1][j1] == 0){
    ++cnt;
    q.push({i1,j1});
    visited[i1][j1] = true;
   }
  }
 }
 return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m;
 vector <int> b;
 for(int i = 1; i <= n; i++)
  for(int j = 1; j <= m; j++)
   cin >> a[i][j];
 for(int i = 1; i <= n; i++){
  for(int j = 1; j <= m; j++){
   if(a[i][j] == 0 && visited[i][j] == false){
    int tmp = bfs(i,j);
    
     b.push_back(tmp);
    
   }
  }
 }
 cout << b.size() << endl;
 sort(b.begin(), b.end());
 for(int i = 0; i < b.size(); i++){
  cout << b[i] << " ";
 }
}