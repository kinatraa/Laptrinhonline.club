#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int n, x;

void solve(){
    cin >> n;
    vector<int> a(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> x;
        a[i] = a[i-1]+x;
    }
    int k;
    for(int i = 1; i < n; i++){
        if(a[n] % a[i] == 0){
            k = 2;
            for(int j = i+1; j <= n; j++){
                if(a[j] > a[i]*k) break;
                else if(a[j] == a[i]*k) ++k;
                if(j == n){
                    cout << a[i];
                    return;
                }
            }
        }
    }
    cout << a[n];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}