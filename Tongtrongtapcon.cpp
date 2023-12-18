#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

vector<int> left0[30];
vector<int> right0[30];
vector<int> left1[30];
vector<int> right1[30];
int n, m, s, l, r;
int a[100];

void Left(int id, int sum, int cnt, int e){
 if(id > l){
  if(e != l){
   left0[cnt].push_back(sum);
  }
  else{
   left1[cnt].push_back(sum);
  }
  return;
 }
 Left(id+1, sum, cnt, e);
 if(e < id-1){
  Left(id+1, sum+a[id], cnt+1, id);
 }
}

void Right(int id, int sum, int cnt, int e){
 if(id < r){
  if(e != r){
   right0[cnt].push_back(sum);
  }
  else{
   right1[cnt].push_back(sum);
  }
  return;
 }
 Right(id-1, sum, cnt, e);
 if(e > id+1){
  Right(id-1, sum+a[id], cnt+1, id);
 }
}

void solve(){
 cin >> n >> m >> s;
 for(int i = 0; i < n; i++) cin >> a[i];
 l = n/2;
 r = l+1;
 Left(0, 0, 0, -2);
 Right(n - 1, 0, 0, n + 1);
 for (int i = 0; i < 30; i++) {
  sort(right0[i].begin(), right0[i].end());
  sort(right1[i].begin(), right1[i].end());
 }
 int res = 0;
 for(int i = 0; i <= m; i++){
  if(left0[i].empty()) continue;
  int tmp = m - i;
  for (auto x : left0[i]) {
   int f = upper_bound(right0[tmp].begin(), right0[tmp].end(), s - x) - right0[tmp].begin();
   res = res % MOD + f % MOD;
   f = upper_bound(right1[tmp].begin(), right1[tmp].end(), s - x) - right1[tmp].begin();
   res = res % MOD + f % MOD;
  }
 }
 for(int i = 0; i <= m; i++){
  if (left1[i].empty()) continue;
  int tmp = m - i;
  for (auto x : left1[i]) {
   int f = upper_bound(right0[tmp].begin(), right0[tmp].end(), s - x) - right0[tmp].begin();
   res = res % MOD + f % MOD;
  }
 }
 cout << res % MOD;
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