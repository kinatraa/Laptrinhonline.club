#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

string convert10_3(int x){
    string a = "";
    while(x > 0){
        a += (char)(x%3 + '0');
        x /= 3;
    }
    reverse(a.begin(), a.end());
    return a;
}

// int convert3_10(string x){
//     reverse(x.begin(), x.end());
//     int res = 0;
//     for(int i = 0; i < x.size(); i++){
//         res += (pow(3,i)*(x[i]-'0'));
//     }
//     return res;
// }

void solve(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << convert10_3(x) << endl;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}