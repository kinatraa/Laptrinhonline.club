#include <bits/stdc++.h>
using namespace std;
#define int long long
const long mod = 1e9+7;

main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int n, x;
    int k;
    cin >> n >> k;
    int res = n;
    for(int i = 0; i < k; i++){
        cin >> x;
        res += 1-x;
    }
    if(res > 0) cout << "NO";
    else cout << "YES";
}