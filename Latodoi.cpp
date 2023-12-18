#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve(){
 int n;
 cin >> n;
 n /= 2;
 int tmp = sqrt(n);
 cout << tmp*2;
}

main(){
 ios_base::sync_with_stdio(false); cin.tie(0);
 solve();
}