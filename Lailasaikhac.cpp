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
    ll n;
    cin >> n;
    if(n == 1){
        int x;
        cin >> x;
        cout << x;
        return 0;
    }
    ll sum = 0, duong = 0, am = 0;
    vector <ll> a;
    vector <ll> b;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x >= 0){
            a.push_back(x);
            duong += x;
        } 
        else{
            b.push_back(x);
            am += x;
        } 
    }
    sum = duong*b.size() - am*a.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll m = a.size();
    for(int i = 0; i < a.size(); i++){
        duong -= a[i];
        sum += (duong-a[i]*(m-i-1));
    }
    m = b.size();
    for(int i = 0; i < b.size(); i++){
        am -= b[i];
        sum += (am-b[i]*(m-i-1));
    }
    cout << sum;
}