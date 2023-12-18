#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        n %= (ll)(pow(10,9)+7);

        cout << n*n%(ll)(pow(10,9)+7) << endl;
    }
}