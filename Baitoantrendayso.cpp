#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int n, check, res = -1;
int cnt[10] = {0};

void backtrack(int sum, int start, vector<vector<int>> cs, vector<int> a){
 for(int i = start; i < n; i++){
  check = 0;
  for(int c = 0; c <= 9; c++){
   if(cs[i][c] == 0 || cnt[c] == 0) continue;
   ++check;
   break;
  }
  if(check == 0){
   for(int c = 0; c <= 9; c++){
    cnt[c] += cs[i][c];
   }
   backtrack(sum+a[i], i+1, cs, a);
   for(int c = 0; c <= 9; c++){
    cnt[c] -= cs[i][c];
   }
  }
 }
 res = max(res, sum);
}

void solve(){
 res = -1;
 cin >> n;
 vector<vector<int>> cs;
 vector<int> a;
 memset(cnt, 0, sizeof(cnt));
 a.resize(n);
 cs.resize(n);
 int tmp;
 for(int i = 0; i < n; i++){
  cs[i].resize(10);
  cs[i].assign(10, 0);
  cin >> a[i];
  tmp = a[i];
  while(tmp){
   cs[i][tmp%10]++;
   tmp /= 10;
  }
  res = max(res, a[i]);
 }
 backtrack(0, 0, cs, a);
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