#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;
int MAX = -10000000;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    int tu, mau = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = n-1; i >= 0; i--){
        if(mau == 0){
            mau = a[i];
            tu = 1;
            continue;
        }
        tu += mau*a[i];
        int tmp = __gcd(tu,mau);
        tu /= tmp;
        mau /= tmp;
        if(i != 0) swap(tu,mau);
    }
    cout << tu << "/" << mau;
}