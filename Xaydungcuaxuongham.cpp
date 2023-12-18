#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int n, m;
    cin >> n;
    vector <ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(n % 2 == 0) m = n/2-1;
    else m = n/2;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(a[i]-a[m]);
    }
    cout << ans;
}