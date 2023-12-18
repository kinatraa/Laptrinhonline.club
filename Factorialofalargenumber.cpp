#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x, y;
    int n;
    cin >> n;
    vector <int> a(1000000);
    a[0] = 1;
    if(n == 0 || n == 1){
        cout << 1;
        return 0;
    }
    ll cnt = 1, tmp, r = 0;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < cnt; j++){
            tmp = a[j]*i + r;
            a[j] = tmp%10;
            r = tmp/10;
        }
        while(r > 0){
            a[cnt] = r%10;
            ++cnt;
            r /= 10; 
        }
    }
    for(int i = cnt-1; i>= 0; i--){
        cout << a[i];
    }
}