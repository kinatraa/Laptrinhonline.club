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
    vector<ll> a(n);
    ll MAX = -1, luu, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tmp += a[i];
        if (a[i] > MAX)
        {
            MAX = a[i];
            luu = i;
        }
    }
    ll ans = MAX-tmp, cnt = 0;
    tmp = -1;
    for (int i = 0; i <= luu; i++)
    {
        if (tmp == -1)
        {
            tmp = a[i];
            ++cnt;
            continue;
        }
        if (i == luu)
        {
            ans += (cnt * tmp);
            break;
        }
        if (a[i] <= tmp)
        {
            ++cnt;
        }
        else
        {
            ans += (cnt * tmp);
            tmp = a[i];
            cnt = 1;
        }
    }
    tmp = -1, cnt = 0;
    for (int i = n - 1; i >= luu; i--)
    {
        if (tmp == -1)
        {
            tmp = a[i];
            ++cnt;
            continue;
        }
        if (i == luu)
        {
            ans += (cnt * tmp);
            break;
        }
        if (a[i] <= tmp)
        {
            ++cnt;
        }
        else
        {
            ans += (cnt * tmp);
            tmp = a[i];
            cnt = 1;
        }
    }
    cout << ans;
}