#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve()
{
    int n;
    int r[1000], b[1000], d[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> r[i] >> b[i] >> d[i];
    for (int i = 0; i < n; i++)
    {
        if (r[i] < b[i])
        {
            if (b[i] <= r[i] * (d[i] + 1))
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
        else
        {
            if (r[i] <= b[i] * (d[i] + 1))
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}