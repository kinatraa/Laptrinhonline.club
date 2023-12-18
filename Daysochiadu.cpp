#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 int n, m, q, k, r;
    cin >> n >> m >> q;
    vector<int> a(n);
    vector<int> du[m+1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        du[(a[i]%m+m)%m].push_back(i+1);
    }
    // for(int i = 0; i < m; i++){
    //     for(int x : du[i]) cout << x << " ";
    //     cout << endl;
    // }
    while(q--){
        cin >> k >> r;
        if(k > du[r].size()) cout << -1 << endl;
        else{
            cout << du[r][k-1] << endl;
        }
    }
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}