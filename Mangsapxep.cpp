#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int check = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] < a[i+1]){
            ++check;
            break;
        }
    }
    if(check == 0) cout << "YES";
    else{
        check = 0;
        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                ++check;
                break;
            }
        }
        if(check == 0) cout << "YES";
        else cout << "NO";
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}