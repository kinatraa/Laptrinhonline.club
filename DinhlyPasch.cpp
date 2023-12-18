#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define int long long
const long MOD = 1e9 + 7;

struct point
{
    int x, y;
};
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        point a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        char d;
        int p;
        cin >> d >> p;
        int Max = -1, Min = 9999;
        if (d == 'y')
        {
            Max = max(a.y, max(b.y, c.y));
            Min = min(a.y, min(b.y, c.y));
        }
        else
        {
            Max = max(a.x, max(b.x, c.x));
            Min = min(a.x, min(b.x, c.x));
        }
        if (p > Max || p < Min)
            cout << 0 << endl;
        else if (p <= Max && p >= Min)
        {
            if (d == 'x')
            {
                if (p == a.x)
                    cout << "A" << endl;
                else if (p == b.x)
                    cout << "B" << endl;
                else if (p == c.x)
                    cout << "C" << endl;
                else
                {
                    if (p > a.x && p < b.x && p < c.x)
                        cout << "A" << endl;
                    else if (p > b.x && p < a.x && p < c.x)
                        cout << "B" << endl;
                    else if (p > c.x && p < a.x && p < b.x)
                        cout << "C" << endl;
                    else if (p > a.x && p > b.x && p < c.x)
                        cout << "C" << endl;
                    else if (p > a.x && p < b.x && p > c.x)
                        cout << "B" << endl;
                    else if (p > c.x && p < a.x && p > b.x)
                        cout << "A" << endl;
                    else if (p > c.x && p < a.x && p < b.x)
                        cout << "C" << endl;
                }
            }
            else
            {
                if (p == a.y)
                    cout << "A" << endl;
                else if (p == b.y)
                    cout << "B" << endl;
                else if (p == c.y)
                    cout << "C" << endl;
                else
                {
                    if (p > a.y && p < b.y && p < c.y)
                        cout << "A" << endl;
                    else if (p > b.y && p < a.y && p < c.y)
                        cout << "B" << endl;
                    else if (p > c.y && p < a.y && p < b.y)
                        cout << "C" << endl;
                    else if (p > a.y && p > b.y && p < c.y)
                        cout << "C" << endl;
                    else if (p > a.y && p < b.y && p > c.y)
                        cout << "B" << endl;
                    else if (p > c.y && p < a.y && p > b.y)
                        cout << "A" << endl;
                    else if (p > c.y && p < a.y && p < b.y)
                        cout << "C" << endl;
                }
            }
        }
    }
}