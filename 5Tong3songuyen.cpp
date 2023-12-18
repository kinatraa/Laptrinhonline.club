#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve()
{
    int a[10000];
    int n, s;
    cin >> n >> s;
    if (3 * n < s) cout << 0;
    else if (n >= s) cout << (s+1)*(s+2)/2;
    else
    {
        int res = 0;
        for (int i = 0; i <= s; i++)
            a[i] = (i <= n) ? (i + 1) : ((i <= 2*n) ?( 2 * n - i + 1) : 0);
        for (int i = 0; i <= n; i++)
            res += a[s - i];
        cout << res;
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}