#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll power(ll mau, ll mu)
{
    if (mu == 0)
        return 1;
    if (mu % 2 == 0)
    {
        ll tmp = power(mau, mu / 2);
        return tmp * tmp % MOD;
    }
    return (mau * power(mau, mu-1)) % MOD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        fflush(stdin);
        cin >> s;
        ll n = s.size();
        map<char, ll> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        map <ll, ll> save;
        ll ans = 1;
        for(int i = 1; i <= n; i++){
            ans = (ans * i) % MOD;
        }
        for (auto &x : m)
        {
            if(x.second > 1){
                ll tmp = 1;
                for(int i = 2; i <= x.second; i++){
                    tmp = (tmp*i)%MOD;
                }
                ans = (ans * power(tmp, MOD-2)) % MOD;
            }
        }
        cout << ans%MOD << endl;
    }
}