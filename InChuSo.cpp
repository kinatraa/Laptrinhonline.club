#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

map<int, string> doc;
map<int, string> hang;

void start()
{
    doc[0] = "";
    doc[1] = "mot";
    doc[2] = "hai";
    doc[3] = "ba";
    doc[4] = "bon";
    doc[5] = "nam";
    doc[6] = "sau";
    doc[7] = "bay";
    doc[8] = "tam";
    doc[9] = "chin";
    hang[1] = "";
    hang[2] = "muoi";
    hang[3] = "tram";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, tmp, len;
    cin >> a >> b;
    start();
    for (int i = a; i <= b; i++)
    {
        tmp = i;
        len = log10(tmp) + 1;
        if (tmp == 1000)
        {
            cout << "mot nghin" << endl;
            break;
        }
        if (len == 1)
        {
            cout << doc[tmp] << endl;
            continue;
        }
        if (len == 2)
        {
            int chia = 10;
            if (tmp >= 10 && tmp <= 19)
            {
                if (tmp == 15)
                    cout << "muoi lam";
                else
                    cout << "muoi " << doc[tmp % 10];
            }
            else
            {
                while (len > 0)
                {
                    int cs = tmp / chia;
                    if (len == 1 && cs == 5)
                        cout << "lam ";
                    else
                        cout << doc[cs] << " " << hang[len] << " ";
                    tmp %= chia;
                    chia /= 10;
                    --len;
                }
            }
        }
        else if (len == 3)
        {
            int chia = 100, cnt = 0;
            if (tmp % 100 == 0)
            {
                cout << doc[tmp / 100] << " tram" << endl;
                continue;
            }
            while (len > 0)
            {
                int cs = (int)(tmp / chia);
                if (tmp >= 10 && tmp <= 19)
                {
                    if (tmp == 15)
                        cout << "muoi lam";
                    else
                        cout << "muoi " << doc[tmp % 10];
                    break;
                }
                else
                {
                    if (len == 1 && cs == 5)
                    {
                        if (cnt == 0)
                            cout << "lam ";
                        else
                            cout << "nam ";
                    }
                    else if (len == 2 && cs == 0)
                    {
                        cout << "linh ";
                        ++cnt;
                    }
                    else
                        cout << doc[cs] << " " << hang[len] << " ";
                }
                tmp %= chia;
                chia /= 10;
                --len;
            }
        }
        cout << endl;
    }
}