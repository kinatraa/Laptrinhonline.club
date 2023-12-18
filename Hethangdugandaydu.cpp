#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
 cin >> n;
 int sum = n*(n-1)/2;
 int r = sum%n;
 vector<int> a(n);
 for(int i = 1; i <= n-1; i++){
  a[i] = i;
  if(i == r){
   a[i] -= r;
   if(a[i] <= 0) a[i] += n;
  }
 }
 sort(a.begin(), a.end());
 for(int i = 1; i < n; i++) cout << a[i] << ' ';
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}