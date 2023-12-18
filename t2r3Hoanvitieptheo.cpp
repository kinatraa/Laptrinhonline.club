#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll MOD = 1000000007;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<char> a;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        a.push_back(s[i]);
        if (i == 0)
            continue;
        if (a[i] > a[i - 1])
            ++check;
    }
    if (check == 0)
    {
        cout << "KHONG CO HOAN VI TIEP THEO";
        return;
    }
    vector<char> b;
    for (int i = n - 2; i >= 0; i--)
    {
        b.push_back(a[i + 1]);
        if (a[i] < a[i + 1])
        {
            for (int j = 0; j < i; j++)
            {
                cout << a[j];
            }
            char x = a[i];
            check = 0;
            for (int j = 0; j < b.size(); j++)
            {
                if (b[j] > x){
                    x = b[j];
                    b.erase(b.begin()+j);
                    b.push_back(a[i]);
                    sort(b.begin(), b.end());
                    break;
                }
            }
            cout << x;
            for(int j = 0; j < b.size(); j++){
                cout << b[j];
            }
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}