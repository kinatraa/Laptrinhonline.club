#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int a[205][205];
bool vis[205][205] = {};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt = 0, check = 0;
int n, m;

void bfs(int i, int j){
    queue <pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = true;
    if(i == 0 || i == n-1 || j == 0 || j == m-1) ++check;
    while(!q.empty()){
        pair<int,int> top = q.front();
        q.pop();
        for(int k = 0; k < 4; k++){
            int i1 = top.first + dx[k];
            int j1 = top.second +dy[k];
            if(i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || vis[i1][j1] || a[i1][j1] == 1) continue;
            vis[i1][j1] = true;
            q.push({i1,j1});
            if(i1 == 0 || i1 == n-1 || j1 == 0 || j1 == m-1) ++check;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
       }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] || a[i][j] == 1) continue;
            bfs(i,j);
            if(check != 0) check = 0;
            else ++cnt;
        }
    }
    cout << cnt;
}