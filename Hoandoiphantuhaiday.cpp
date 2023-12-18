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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    ll sa = 0, sb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sa += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sb += b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            sa = sa - a[i] + b[i];
            sb = sb - b[i] + a[i];
        }
    }
    ll ans = abs(sa - sb);
    cout << ans;
}