#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve()
{
    int q, n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << n/3 + n/5 + n/7 - n/15 - n/35 - n/21 + n/105 << endl;
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}