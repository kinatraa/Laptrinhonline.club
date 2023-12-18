#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int n;
 cin >> n;
 int m = n/100;
 if(n % 100 == 0) cout << m;
 else cout << m+1;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}