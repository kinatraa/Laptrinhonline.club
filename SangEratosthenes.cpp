#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve(){
    int n = 1000000;
    vector<int> a(n+1, 0);
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(a[i] == 0){
            for(int j = i*i; j <= n; j+=i){
                a[j] = 1;
            }
        }
    }
    int t, l, r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        int cnt = 0;
        for(int i = l; i <= r; i++){
            if(a[i] == 0) ++cnt;
        }
        cout << cnt << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    solve();
}