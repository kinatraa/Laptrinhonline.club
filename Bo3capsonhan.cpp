#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 int n, r;
    cin >> n >> r;
    map<int,int> a;
    map<int,int> b;
    map<int,int> c;
    vector<int> base(n);
    for(int i = 0; i < n; i++){
        cin >> base[i];
    }
    int i = 0, j = 1, k = 2;
    while(i < n && j < n && k < n){
        a[base[i]]++;
        if(base[j] % r == 0){
            b[base[j]] += a[base[j]/r];
        }
        if(base[k] % r == 0){
            c[base[k]] += b[base[k]/r];
        }
        ++i;
        ++j;
        ++k;
    }
    int res = 0;
    for(auto &it : c){
        res += it.second;
    }
    cout << res;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}