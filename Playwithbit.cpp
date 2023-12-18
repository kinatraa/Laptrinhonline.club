#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int n, k, x;

void solve(){
 cin >> n >> k;
 vector<int> b(n, -1);
 vector<string> a;
 int res = 0;
 string tmp;
 unordered_map<string,int> cnt;
 for(int i = 0; i < n; i++){
  cin >> x;
  if(x > k) continue;
  b[i] = x ^ (k - x);
  tmp = to_string(x);
  a.push_back(tmp);
  cnt[tmp]++;
 }
 for(int i = 0; i < n; i++){
  cnt[a[i]]--;
  res += cnt[to_string(b[i])];
 }
 cout << res << endl;
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