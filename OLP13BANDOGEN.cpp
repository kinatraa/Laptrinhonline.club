#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
 int n, k;
 cin >> n >> k;
 vector<string> a(n);
 map<string,int> cnt1;
 map<string,int> cnt2;
 string tmp = "";
 for(int i = 0; i < n; i++){
  cin >> a[i];
  if(a[i].size() < k) continue;
  tmp = a[i].substr(0, k) + a[i].substr(a[i].size()-k, k);
  cnt1[tmp]++;
  if(a[i].size() < k+1) continue;
  tmp = a[i].substr(0, k+1) + a[i].substr(a[i].size()-k-1, k);
  cnt2[tmp]++;
 }
 int res = 0;
 for(auto i : cnt1){
  if(i.second >= 2){
   res += ((i.second-1)*i.second/2);
  }
 }
 for(auto i : cnt2){
  if(i.second >= 2){
   res -= ((i.second-1)*i.second/2);
  }
 }
 cout << res;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int t = 1;
 //cin >> t;
 while(t--){
  solve();
 }
}