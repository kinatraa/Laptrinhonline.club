#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve()
{
    int h, l, x;
    cin >> h >> l;
    int tran[h + 1] = {0};
    int day[h + 1] = {0};
    for (int i = 0; i < l; i++){
        cin >> x;
        tran[x]++;
    }
    for (int i = 0; i < l; i++){
        cin >> x;
        day[x]++;
    }
    for (int i = h - 1; i >= 0; i--){
        day[i] += day[i + 1];
        tran[i] += tran[i + 1];
    }
    int res = day[0] + tran[h];
    for (int i = 0; i <= h; i++)
        res = (res < (day[i] + tran[h - i])) ? res : (day[i] + tran[h - i]);
    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}