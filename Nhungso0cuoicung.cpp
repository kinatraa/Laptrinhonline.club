// source https://w...content-available-to-author-only...k.com/groups/thihsgtin/permalink/644043217683386/

#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define int long long
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<pair<int, int>> cnt;
        int max5 = 0;
        for (int i = 1; i <= n; i++){
            int cnt2 = 0, cnt5 = 0;
            while (a[i] % 5 == 0){
                a[i] /= 5;
                cnt5++;
            }
            while (a[i] % 2 == 0){
                a[i] /= 2;
                cnt2++;
            }
            max5 += cnt5;
            cnt.push_back({cnt2, cnt5});
        }
        vector<vector<int>> f(k + 1, vector<int>(max5 + 1, -1));
        f[0][0] = 0;
        for (int i = 1; i <= n; i++){
            for (int j = min(i, k); j >= 1; j--){
                for (int m = max5; m >= cnt[i - 1].second; m--){
                    if (f[j - 1][m - cnt[i - 1].second] != -1)
                        f[j][m] = max(f[j][m], f[j - 1][m - cnt[i - 1].second] + cnt[i - 1].first);
                }
            }
        }
        int res = 0;
        for (int m = 0; m <= max5; m++)
            res = max(res, min(m, f[k][m]));
        cout << res << endl;
    }
}