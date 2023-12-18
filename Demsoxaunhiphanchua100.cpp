#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll all[1000006] = {0, 2, 4}, diff[1000006] = {0, 2, 4};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 3; i < 1000006; i++){
        all[i] = all[i-1]*2%MOD;
        diff[i] = (diff[i-1]+diff[i-2]+1)%MOD;
    }
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll ans = (all[n]-diff[n])%MOD;
        cout << (ans+MOD)%MOD << endl;
    }
}