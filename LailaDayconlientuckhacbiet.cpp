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
    ll n, cnt = 0, ans = -1;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<ll, pair<int, int>> m;
    ll dp[100001];
    dp[0] = 1;
    m[a[0]].first = 0;
    m[a[0]].second = 1;
    ll l = -1;
    for (ll i = 1; i < n; i++)
    {
        if (m[a[i]].second == 0)
        {
            dp[i] = dp[i - 1] + 1;
            m[a[i]].first = i;
            m[a[i]].second++;
        }
        else
        {
            if (l == -1)
            {
                dp[i] = i - m[a[i]].first;
                l = m[a[i]].first;
                m[a[i]].first = i;
                m[a[i]].second = 1;
                continue;
            }
            if(m[a[i]].first <= l){
                dp[i] = dp[i-1] + 1;
                m[a[i]].first = i;
            }
            else{
                dp[i] = i - m[a[i]].first;
                l = m[a[i]].first;
                m[a[i]].first = i;
                m[a[i]].second = 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
}