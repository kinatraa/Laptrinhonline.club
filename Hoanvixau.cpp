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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (b[i] != '*')
        {
            for (int j = 0; j < n; j++)
                if (a[j] == b[i])
                {
                    a[j] = '*';
                    b[i] = '*';
                    break;
                }
        }
    }
    for (int i = 0; i < n; i++)
        if (b[i] != '*')
        {
            cout << "no";
            return 0;
        }
    cout << "yes";
}