#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int div(string s, ll a){
    int n = s.size(), tmp = 0;
    for(int i = 0; i < n; i++){
        tmp = tmp*10 + (s[i] - '0');
        tmp %= a;
    }
    if(tmp == 0) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    ll a, b;
    cin >> a >> b;
    string x, y;
    int n = s.size(), h = log10(a)+1, k = log10(b)+1;
    for(int i = h; i <= n-k; i++){
        x = s.substr(0, i);
        y = s.substr(i, n-i);
        if(y[0] == '0') continue;
        if(div(x,a) == 0 || div(y,b) == 0) continue;
        cout << "YES\n" << x << endl << y;
        return 0;
    }
    cout << "NO";
}