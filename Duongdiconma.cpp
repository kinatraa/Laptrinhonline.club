#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve(){
    int n, x;
    cin >> n;
    vector <pair<int,int>> a((n+1)*(n+1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> x;
            a[x] = {i,j};
        }
    }
    for(int i = 1; i <= n*n; i++){
        printf("(%d,%d) ", a[i].first, a[i].second);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    solve();
}