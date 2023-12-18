#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    unordered_map<int, int> mp;
    vector<vector<int>> adj;
    int n, m, u, v, res= 0;
    cin >> n >> m;
    adj.resize(n);
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
    }   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < adj[i].size(); j++)
            for(int k = 0; k < adj[adj[i][j]].size(); k++)
                mp[adj[adj[i][j]][k]]++;
        for(auto x: mp) 
            res += x.second*(x.second - 1)/2;
        mp.clear(); 
    }
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}