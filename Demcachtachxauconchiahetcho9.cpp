#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    string s;
    cin >> s;
    int a[9] = {0};
    int sum = 0;
    for(char x : s){
        sum += (x-'0');
        a[sum%9]++;
    }
    int res = 0;
    for(int i = 0; i < 9; i++){
        if(i == 0){
            if(a[i] % 2 == 0){
                res += (a[i]/2)%MOD*((a[i]+1)%MOD);
            }
            else{
                res += a[i]%MOD*((a[i]+1)/2%MOD);
            }
        }
        else{
            if(a[i] % 2 == 0){
                res += (a[i]/2)%MOD*((a[i]-1)%MOD);
            }
            else{
                res += a[i]%MOD*((a[i]-1)/2%MOD);
            }
        }
        res %= MOD;
    }
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}