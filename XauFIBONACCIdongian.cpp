#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int dp[94] = {0, 1, 1};

void fib(int n, int i)
{
    if (n == 1)
        cout << "A";
    else if (n == 2)
        cout << "B";
    else if (i <= dp[n - 2])
        fib(n - 2, i);
    else
        fib(n - 1, i - dp[n - 2]);
}

void solve()
{
    for (int i = 3; i < 93; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n >> i;
        fib(n, i);
        cout << endl;
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}