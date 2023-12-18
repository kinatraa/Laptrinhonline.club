#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int m[1000005] = {0};

void sang(){
    m[0] = 1;
    m[1] = 1;
    m[2] = 0;
    for(int i = 2; i <= sqrt(1000005); i++){
        if(m[i] == 0){
            for(int j = i*i; j <= 1000005; j+=i){
                m[j] = 1;
            }
        }
    }
}

void solve(){
    int t;
    cin >> t;
    sang();
    while(t--){
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            if(m[i] == 0) cout << i << " ";
        }
        cout << endl;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}