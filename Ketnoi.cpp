#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int parent[100005];

int find(int u) {
    if (parent[u] == u) return u;
    return parent[u] = find(parent[u]);
}

void add(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) parent[u] = v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int k, u, v;
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
    for(int i = 0; i < m; i++){
        cin >> k >> u >> v;
        if(k == 2){
            if(find(u) == find(v)) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else{
            add(u,v);
        }
    }
}