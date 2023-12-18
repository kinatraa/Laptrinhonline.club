#include<bits/stdc++.h>
using namespace std;
bool vis[1001];
int d[1000];
int main(){
 int n; cin >> n;
 int k,m,s,f; cin >> k >> m >> s >> f;
 queue<int>q;
 q.push(s);
 vis[s]=true;
 d[s] = 0;
 int a[2] = {k,-m};
 while(!q.empty()){
  int u=q.front();
  q.pop();
  for(int i = 0; i < 2; i++){
   int x = u + a[i];
   if(x >= 1 && x <= n && !vis[x]){
    d[x] = d[u] + 1;
    if(x == f) break;
    q.push(x);
    vis[x] = true;
   }
  }
 }
 if(!d[f]) cout << "-1";
 else cout << d[f];
}