#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll dem(vector <ll> a, ll n){
    vector <pair<ll,ll>> index;
    for(int i = 0; i < n; i++){
        index.push_back({a[i], i});
    }
    sort(index.begin(), index.end());
    bool visited[n] = {};
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(visited[i] || index[i].second == i) continue;
        ll tmp = 0, j = i;
        while(!visited[j]){
            visited[j] = true;
            j = index[j].second;
            ++tmp;
        }
        if(tmp > 0) cnt += (tmp-1);
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, ans = INT64_MAX;
    cin >> n;
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ans = min(ans, dem(a, n));
    reverse(a.begin(), a.end());
    ans = min(ans, dem(a,n));
    cout << ans;
}