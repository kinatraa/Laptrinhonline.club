#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int thuaso(int x){
    int a[] = {1, 2, 5, 25, 125};
    int res = 0;
    for(int i = 0; i < 5; i++){
        while(1){
            if(a[i] <= x){
                res++;
                a[i] *= 10;
            }
            else break;
        }
    }
    return res;
}

void solve()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int x;
        cin >> x;
        cout << "#Case " << i << ": " << thuaso(x) << endl;
    }    
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}