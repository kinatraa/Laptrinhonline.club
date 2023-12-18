#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;

void solve(){
 int n;
 cin >> n;
 int x, cnt = 0;
 stack<int> a;
 while(n--){
  cin >> x;
  if(a.size() == 0) a.push(x);
  else{
   if(x <= a.top()){
    ++cnt;
    x = a.top()+1;
    a.push(x);
   }
   else a.push(x);
  }
 }
 cout << cnt;
}

main(){
 ios_base::sync_with_stdio(false); cin.tie(0);
 solve();
}