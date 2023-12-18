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
    ll n, s;
    cin >> n >> s;
    ll a1, a2, sum = 0, b1, b2;
    a2 = min(n,s);
    a1 = max(s-2*n,(ll)0);
    for(ll i = a1; i < a2+1; i++){
        b1 = max(s-i-n,(ll)0);
        b2 = 0;
        if(s-i-n > 0) b2 = n;
        else b2 = s-i;
        sum += (b2+1-b1);
    }
    cout << sum;
}