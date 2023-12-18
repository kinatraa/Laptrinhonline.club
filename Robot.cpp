#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

bool vis[1005][1005] = {};

int bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y] = true;
    int cnt = 1;
    while(!q.empty()){
        pair<int,int> top = q.front(); q.pop();
        if(top.second % 2 == 1){
            if(vis[(top.second+1)/2][top.first] == false){
                ++cnt;
                vis[(top.second+1)/2][top.first] = true;
                q.push({(top.second+1)/2, top.first});
            }
        }
        if(top.first % 2 == 0){
            if(vis[top.second][top.first/2] == false){
                ++cnt;
                vis[top.second][top.first/2] = true;
                q.push({top.second, top.first/2});
            }
        }
    }
    return cnt;
}

void solve(){
    int x, y;
    cin >> x >> y;
    int res = bfs(x,y);
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}