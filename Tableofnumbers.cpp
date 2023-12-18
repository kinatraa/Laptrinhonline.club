#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve(){
    int m, n; cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int dp[m][n];
    int cnt[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            dp[i][j] = INF;
            cnt[i][j] = 0;
        }
    }
    dp[0][0] = a[0][0];
    cnt[0][0] = 1;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                if (a[i][j] > 0) {
                    if (dp[i - 1][j] + a[i][j] < dp[i][j]) {
                        dp[i][j] = dp[i - 1][j] + a[i][j];
                        cnt[i][j] = cnt[i - 1][j];
                    } else if (dp[i - 1][j] + a[i][j] == dp[i][j]) {
                        cnt[i][j] += cnt[i - 1][j];
                    }
                }
            }
            if (j > 0) {
                if (a[i][j] > 0) {
                    if (dp[i][j - 1] + a[i][j] < dp[i][j]) {
                        dp[i][j] = dp[i][j - 1] + a[i][j];
                        cnt[i][j] = cnt[i][j - 1];
                    } else if (dp[i][j - 1] + a[i][j] == dp[i][j]) {
                        cnt[i][j] += cnt[i][j - 1];
                    }
                }
            }
        }
    }
    cout << dp[m - 1][n - 1] << " " << cnt[m - 1][n - 1] << endl;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}