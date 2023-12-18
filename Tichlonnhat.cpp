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
    int t;
    cin >> t;
    while(t--){
        ll n, ans;
        cin >> n;
        ll tmp = n/3;
        if(n % 3 == 1) ans = pow(3,tmp-1)*4;
        else if(n % 3 == 0) ans = pow(3,tmp);
        else ans = pow(3,tmp)*2;
        cout << ans << endl;
    }
}