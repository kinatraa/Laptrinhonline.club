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
    ll x, y, cnt = 0, i, tmp;
    cin >> x >> y;
    for(i = min(x,y); i >= 2; i--){
        if(i*(i-1)+i-1 <= x){
            cnt += (i*(i-1)/2);
            break;
        }
        else{
            tmp = x/i;
            if(i*tmp+tmp > x) --tmp;
            cnt += tmp;
        }
    }
    cout << cnt;
}