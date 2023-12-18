#include<bits/stdc++.h>
using namespace std;
bool vis[100000];
int d[100000];
int main(){
 int n,k; cin >> n >> k;
 int a[k];
 priority_queue<int, vector<int>, greater<int> > pq;
 for(int i=0; i<k; i++) cin >> a[i];
 int s,f; cin >> s >> f;
 queue<int>q;
 q.push(s);
 vis[s]=true;
 d[s] = 0;
 while(!q.empty()){
  int u=q.front();
  q.pop();
  for(int i = 0; i < k; i++){
   int x = u + a[i];
   if(x >= 1 && x <= n && !vis[x]){
    d[x] = d[u] + 1;
    if(x == f) pq.push(d[f]);
    q.push(x);
    vis[x] = true;
   }
  }
 }
 if(!d[f]) cout << "-1";
 else cout << pq.top();
}