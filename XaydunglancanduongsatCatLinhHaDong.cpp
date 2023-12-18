#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, x, cnt = 0;
    cin >> n >> m;
    map <int, int> a;
    map <int, int> b;
    int MAX = -1;
    for(int i = 0; i < n; i++){
        cin >> x;
        a[x]++;
        if(x > MAX) MAX = x;
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        b[x]++;
        if(x > MAX) MAX = x;
    }
    for(int i = 1; i <= MAX; i++){
        cnt += min(a[i], b[i]);
    }
    cout << cnt;
}