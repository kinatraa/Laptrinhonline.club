#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int t, n, x;
 cin >> t >> n;
 if(n == 0){
  cout << endl;
  return;
 }
    vector<int> a(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> x;
        a[i] = a[i-1]+x;
    }
 cout << t << " ";
    int k;
    for(int i = 1; i < n; i++){
        if(a[n] % a[i] == 0){
            k = 2;
            for(int j = i+1; j <= n; j++){
                if(a[j] > a[i]*k) break;
                else if(a[j] == a[i]*k) ++k;
                if(j == n){
                    cout << a[i] << endl;
                    return;
                }
            }
        }
    }
    cout << a[n] << endl;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int t = 1;
 cin >> t;
 while(t--){
  solve();
 }
}