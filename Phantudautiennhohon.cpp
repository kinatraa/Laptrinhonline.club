#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main() {
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int n,q; cin >> n >> q;
    int a[n+1]; 
    a[0] = INT_MAX;
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        a[i] = min(a[i-1],x);
    }
    while(q--){
        int x; cin>>x;
        auto pos = lower_bound(a, a+n, x, cmp)-a;
        if(pos==n){
            int check=0,vitri;
            for(int i=1; i<=n; i++){
                if(a[i]<=x){vitri=i; check=1; break;}
            }
            if(check) cout<<vitri<<endl;
            else cout<<0<<endl;
        }
        else cout<<pos<<endl;
    }
}