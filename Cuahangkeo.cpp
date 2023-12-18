#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b = n / 20;
    int c = n / 9;
    int temp = 0;
    for (int i = 0; i <= b; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if ((n - i * 20 - j * 9) % 6 == 0)
            {
                temp = max(temp, (n - i * 20 - j * 9) / 6 + i + j);
                cout << temp;
                return 0;
            }
        }
    }
    cout << -1;
}