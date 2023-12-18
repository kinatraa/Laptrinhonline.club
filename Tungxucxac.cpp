#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1000000007;
#define matrix vector<vector<ll>>

matrix base = {
        {1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0},
        {0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0}
    };

matrix result(6, vector<ll>(6,0));

matrix nhan(matrix a, matrix b){
    matrix c(6, vector<ll>(6));
    for(int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            c[i][j] = 0;
            for (int k = 0; k < 6; k++){
                c[i][j] += ((a[i][k]%MOD) * (b[k][j]%MOD));
    c[i][j] %= MOD;
            }
        }
    }
    return c;
}

matrix luythua(matrix base, ll mu){
    for(int i = 0; i < 6; i++){
        result[i][i] = 1;
    }
    while(mu){
        if(mu % 2 == 1){
            result = nhan(result, base);
        }
        base = nhan(base,base);
        mu /= 2;
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    matrix result = luythua(base, n);
    cout << result[0][0] % MOD;
}