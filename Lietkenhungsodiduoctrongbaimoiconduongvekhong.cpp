#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

map<int,int> check;

void solve(){
 int n;
 cin >> n;
 stack<int> s;
 s.push(n);
 check[n]++;
 while(s.size()){
  int u = s.top(); s.pop();
  for(int i = 1; i*i <= u; i++){
   if(u % i == 0){
    int v = (i-1)*(u/i + 1);
    if(!check[v]){
     check[v]++;
     s.push(v);
    }
   }
  }
 }
 for(auto x: check) cout << x.first << " ";
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}