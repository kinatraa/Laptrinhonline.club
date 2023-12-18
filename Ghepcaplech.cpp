#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int i = 0, j = 1;
    int res = 0;
    while(i < n && j < n){
        if(abs(a[i]-a[j]+1) <= k){
            res += (j-i);
            ++j;
        }
        else{
            ++i;
            if(i == j) ++j;
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    i = 0; j = 1;
    while(i < n && j < n){
        if(abs(a[i]-a[j]+1) <= k){
            res += (j-i);
            ++j;
        }
        else{
            ++i;
            if(i == j) ++j;
        }
    }
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}