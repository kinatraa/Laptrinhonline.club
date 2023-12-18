#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size(), q, l, r;
    cin >> q;
    vector <int> lat(n,0);
    while(q--){
        cin >> l >> r;
        ++lat[l];
        if(r+1 < n) --lat[r+1];
    }
    for(int i = 1; i < n; i++) lat[i] += lat[i-1];
    for(int i = 0; i < n; i++){
        if(lat[i] % 2 != 0){
            s[i] = (97 - s[i]);
        }
    }
    cout << s;
}