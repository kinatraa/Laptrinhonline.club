#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << abs(a[1]-1-a[0]) + abs(a[2]-1-a[1]);
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}