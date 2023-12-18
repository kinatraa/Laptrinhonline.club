#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int n, m;
int a[401][401];
bool vis[401][401] = {};

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

bool bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    vis[i][j] = true;
    int left = j, right = j, top = i, bottom = i;
    while(q.size()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k = 0; k < 8; k++){
            int x1 = x + dx[k];
            int y1 = y + dy[k];
            if(x1 < 0 || x1 >= n || y1 < 0 || y1 >= m || a[x1][y1] == 0 || vis[x1][y1]) continue;
            left = min(left, y1);
            right = max(right, y1);
            top = min(top, x1);
            bottom = max(bottom, x1);
            vis[x1][y1] = true;
            q.push({x1,y1});
        }
    }
    // cout << left << " " << right << " " << top << " " << bottom << endl;
    if(left > right || top > bottom){
        return false;
    }
    for (int i = top; i <= bottom; i++) {
        for (int j = left; j <= right; j++) {
            if (a[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

void solve(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1 && vis[i][j] == false){
                if(bfs(i,j)) ++cnt;
            }
        }
    }
    cout << cnt;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}