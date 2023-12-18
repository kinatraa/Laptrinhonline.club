#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve(){
 int n;
 cin >> n;
 int res = 0;
 while(n != 1){
  ++res;
  n/=2;
 }
 cout << res;
}

main(){
 ios_base::sync_with_stdio(false); cin.tie(0);
 solve();
}