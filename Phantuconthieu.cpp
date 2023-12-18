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
    int x, n = -1;
    map <int, int> m;
    while(cin >> x){
        m[x]++;
        if(x > n) n = x;
    }
    for(int i = 1; i <= n; i++){
        if(m[i] == 0){
            cout << i;
            break;
        }
    }
}