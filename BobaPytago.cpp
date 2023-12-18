#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const long MOD = 1e9 + 7;

int pytago1(int a, int b, int c){
    float x1 = sqrt(a*a+b*b);
    int x2 = sqrt(a*a+b*b);
    if(x1 == x2){
        return abs(x1-c);
    }
    return INT_MAX;
}

int pytago2(int a, int b, int c){
    if(a <= b) return INT_MAX;
    float x1 = sqrt(a*a-b*b);
    int x2 = sqrt(a*a-b*b);
    if(x1 == x2){
        return abs(x1-c);
    }
    return INT_MAX;
}

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int res = INT_MAX;
    res = min(res,pytago1(a,b,c));
    res = min(res,pytago1(b,c,a));
    res = min(res,pytago1(a,c,b));
    res = min(res,pytago2(a,b,c));
    res = min(res,pytago2(b,c,a));
    res = min(res,pytago2(a,c,b));
    if(res == INT_MAX) cout << -1;
    else cout << res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}