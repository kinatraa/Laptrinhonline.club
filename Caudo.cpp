#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000000007;
ll sum = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        sum = 0;
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        ll Max = *max_element(a.begin(), a.end());
        if (Max > sum - Max)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}