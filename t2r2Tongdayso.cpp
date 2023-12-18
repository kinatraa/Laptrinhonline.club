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
    ll n, sum = 0;
    while(cin >> n){
        sum += n;
        sum %= MOD;
    }
    cout << (sum + MOD) % MOD;
}