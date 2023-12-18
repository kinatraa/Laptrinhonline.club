#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve()
{
    int n, a, b;
    cin >> n;
    for (int i = sqrt(n); i > 0; i--)
    {
        if (n % i == 0)
        {
            a = i;
            b = n / i;
            break;
        }
    }
    a = log10(a);
    b = log10(b);
    if(a > b) cout << a+1;
    else cout << b+1;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}