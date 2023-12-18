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
    int n, m, d, ans = 0, tmp;
    cin >> n >> m >> d;
    vector<int> a(n * m);
    for (int i = 0; i < n * m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    tmp = a[n * m / 2];
    for (int i = 0; i < n * m; i++)
    {
        if(abs(a[i]-tmp) % d != 0){
            cout << -1;
            return 0;
        }
        ans += abs(a[i] - tmp) / d;
    }
    cout << ans;
}