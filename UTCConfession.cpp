#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    vector <ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0) continue;
        a[i] += a[i-1];
    }
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        cout << m+a[x-1] << endl;
    }
}