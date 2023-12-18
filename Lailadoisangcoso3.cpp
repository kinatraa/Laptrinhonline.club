#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void convert10_3(int x, string &a){
    a = "";
    while(x > 0){
        a += (char)(x%3 + '0');
        x /= 3;
    }
    reverse(a.begin(), a.end());
}

int convert3_10(string x){
    reverse(x.begin(), x.end());
    int res = 0;
    for(int i = 0; i < x.size(); i++){
        res += (pow(3,i)*(x[i]-'0'));
    }
    return res;
}

void solve(){
    int x, y;
    string a, b, c;
    cin >> x >> y;
    convert10_3(x, a);
    convert10_3(y, c);
    for(int i = 0; i < (c.size()-a.size()); i++){
        a = "0" + a;
    }
    for(int i = 0; i < c.size(); i++){
        int tmp = c[i] - a[i];
        while(tmp < 0){
            tmp += 3;
        }
        b += (char)(tmp+'0');
    }
    cout << convert3_10(b);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}