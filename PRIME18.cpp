#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int bcnn(int a, int b){
    return (a * b) / __gcd(a, b); 
}

int res(int n, int a, int b)
{
    int s = n / a + n / b - n / bcnn(a, b);
    return s;
}

void solve(){
    int t, a, b, m, n;
    cin >> t;
    while(t--)
    {
        cin >> m >> n >> a >> b;
        cout << res(n, a, b) - res(m - 1, a, b) << endl;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}