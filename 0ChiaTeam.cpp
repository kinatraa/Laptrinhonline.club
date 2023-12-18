#include <bits/stdc++.h>
using namespace std;
#define int long long
int cso(int a)
{
    return (a - 1) * (a) / 2;
};

main()
{
    int a, b, i;
    cin >> a >> b;
    int tbc = a / b;
    int chiadu = a % b;
    int ans1 = b * cso(tbc) + chiadu * (tbc);
    int ans2 = cso(a - b + 1);
    if (a <= b)
    {
        cout << "0 0";
    }
    else
    {
        cout << ans1 << " " << ans2;
    }
};