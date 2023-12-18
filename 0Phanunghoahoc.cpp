#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int n, m;
ll cnt = 0;
vector <ll> a[1000];
bool visited[1000] = {};
vector <ll> ans;

void dfs(ll u){
    visited[u] = true;
    ++cnt;
    for(int x : a[u]){
        if(!visited[x]) dfs(x);
    }
}

void kt(){
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            ans.push_back(cnt);
            cnt = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m;
    if(n == 1){
        cout << 1;
        return 0;
    }
    for(int i = 0; i < m; i++){
        ll x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    kt();
    ll sum = 1;
    for(int i = 0; i < ans.size(); i++){
        sum *= pow(2, ans[i]-1);
    }
    cout << sum;
}