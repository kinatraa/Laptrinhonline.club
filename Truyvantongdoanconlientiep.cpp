#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector <ll> a(n);
    vector <ll> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0) b[i] = a[i];
        else{
            b[i] = b[i-1]+a[i];
        }
    }
    while(m--){
        ll l, r;
        cin >> l >> r;
        if(l == 1) cout << b[r-1] << endl;
        else cout << b[r-1]-b[l-2] << endl;
    }
}