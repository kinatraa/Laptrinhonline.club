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
        ll l, r;
        cin >> l >> r;
        for(int i = 39; i >= 1; i--){
            ll tmp = floor(pow(r, 1.0/i) + 0.000000001);
            if(l - pow(tmp,i) < 0.000000001){
                cout << i << endl;
                break;
            }
        }
    }
}