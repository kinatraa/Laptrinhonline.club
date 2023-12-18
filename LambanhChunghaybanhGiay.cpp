#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        ll ans = -1, tmp;
        if(a > c){
            swap(a,c);
            swap(b,d);
        }
        else if(a == c){
            if(b < d) swap(b,d);
        }
        for(int i = 0; i <= n/a; i++){
            tmp = i*b + (n-i*a)/c*d;
            ans = max(ans,tmp);
        }
        cout << ans << endl;
    }
}