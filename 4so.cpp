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
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    map<ll, ll> cnt;
    ll res = 0;
    for (int c = 0; c < n; c++)
    {
        for (int d = c + 1; d < n; d++)
        {
            ll sum = static_cast<ll>(A[c]) + A[d];
            res += cnt[sum];
        }

        for (int a = 0; a < c; a++)
        {
            ll sum = static_cast<ll>(A[a]) + A[c];
            cnt[sum]++;
        }
    }
    cout << res;
}