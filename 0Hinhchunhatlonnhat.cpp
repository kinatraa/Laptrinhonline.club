#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n + 3][n + 3] = {0};
    int ans = INT32_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int dp[n + 3];
    for (int i = 1; i <= n; i++)
    {
        memset(dp, 0, sizeof(dp));
        for (int k = i; k <= n; k++)
        {
            int sum = 0;
            int tmp = INT32_MIN;
            for (int j = 1; j <= n; j++)
            {
                dp[j] += a[k][j];
                sum = max(dp[j], sum+dp[j]);
                tmp = max(sum, tmp);
            }
            ans = max(tmp,ans);
        }
    }
    cout << ans;
}