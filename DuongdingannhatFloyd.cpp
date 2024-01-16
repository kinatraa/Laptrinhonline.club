#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;


int main() {
    int n, m, q;
    cin >> n >> m >> q; 
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, INF));
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }
    vector<vector<int>> dis(graph);
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (dis[i][k] != INF && dis[k][j] != INF && dis[i][k] + dis[k][j] < dis[i][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    for (int i = 0; i < q; ++i) {
        int start, end;
        cin >> start >> end;

        if (dis[start][end] == INF) {
            cout << -1 << endl;
        } else {
            cout << dis[start][end] << endl;
        }
    }

   
}
