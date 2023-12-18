#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

int a, b, c, k, n;
map<int,int> cnt;

struct Point{
 int x, y, color;
};

vector<Point> v;

void qa(){
 vector<pair<int,int>> ans;
 for(auto i : cnt){
  ans.push_back({i.second, i.first});
 }
 sort(ans.begin(), ans.end());
 int tmp = ans[0].first;
 for(auto i : ans){
  if(i.first != tmp) break;
  cout << i.second << " ";
 }
 cout << endl;
}

void qb(){
 int res = 0;
 for(auto i : cnt){
  if(i.second > 1){
   res += i.second*(i.second-1)/2;
  }
 }
 cout << res << endl;
}

int dis(Point a){
 return a.x*a.x+a.y*a.y;
}

void qc(){
 int d[10];
 for(int i = 0; i < 10; i++) d[i] = INT64_MAX;
 for(int i = 0; i < n; i++){
  d[v[i].color] = min(d[v[i].color], dis(v[i]));
 }
 sort(d, d+10);
 if(d[k-1] == INT64_MAX) cout << -1 << endl;
 else cout << d[k-1] << endl;
}

void solve(){
 cin >> a >> b >> c >> n;
 v.resize(n);
 for(int i = 0; i < n; i++){
  cin >> v[i].x >> v[i].y >> v[i].color;
  cnt[v[i].color]++;
 }
 cin >> k;
 if(a) qa();
 if(b) qb();
 if(c) qc();
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