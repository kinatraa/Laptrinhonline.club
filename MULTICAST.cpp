#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

struct node{
 int data;
 node* parent;
 vector<node*> child;
};

int cnt[200005] = {0};
vector<node*> a;
int check = 0;
map<int,int> down;
map<int,int> up;
int upbonus = 0;
bool vis[200005] = {};

node* create(int data1){
 node* newnode = new node;
 newnode->data = data1;
 return newnode;
}

void add(node* parent, node* child1){
 parent->child.push_back(child1);
 child1->parent = parent;
}

void upcast(node* u){
 if(vis[u->data] == false && up.find(u->data) != up.end()){
  upbonus += up[u->data];
 }
 vis[u->data] = true;
 cnt[u->data] += upbonus;
 if(u == a[1]){
  return;
 }
 upcast(u->parent);
}

void downcast(node* u, int bonus){
 vis[u->data] = true;
 cnt[u->data] += bonus;
 for(node* v : u->child){
  if(vis[v->data]) continue;
  if(down[v->data]) downcast(v, bonus+down[v->data]);
  else downcast(v, bonus);
 }
}

void dfs(node* u, node* end){
 cnt[u->data]++;
 if(u == end){
  ++check;
  return;
 }
 for(node* v : u->child){
  dfs(v, end);
  if(check) return;
 }
 cnt[u->data]--;
}

void bfs(node* start){
 queue<node*> q;
 cnt[start->data]++;
 q.push(start);
 while(q.size()){
  node* top = q.front(); q.pop();
  for(node* u : top->child){
   cnt[u->data]++;
   q.push(u);
  }
 }
}

void solve(){
 int n;
 cin >> n;
 a.resize(n+1);
 for(int i = 1; i <= n; i++){
  a[i] = create(i);
 }
 int x, y;
 for(int i = 0; i < n-1; i++){
  cin >> x >> y;
  add(a[x], a[y]);
 }
 int q;
 cin >> q;
 if(n > 1000){
  while(q--){
   string s;
   int t;
   cin >> s >> t;
   if(s == "UPCAST"){
    up[t]++;
   }
   else if(s == "DOWNCAST"){
    down[t]++;
   }
  }
  for(auto i = up.rbegin(); i != up.rend(); ++i){
   if(up[i->first] && vis[i->first] == false){
    upbonus = 0;
    upcast(a[i->first]);
   }
  }
  memset(vis, false, sizeof(vis));
  for(auto i : down){
   if(down[i.first] && vis[i.first] == false){
    downcast(a[i.first], down[i.first]);
   }
  }
 }
 else{
  while(q--){
   string s;
   int t;
   cin >> s >> t;
   if(s == "UPCAST"){
    check = 0;
    dfs(a[1], a[t]);
   }
   else if(s == "DOWNCAST"){
    bfs(a[t]);
   }
  }
 }
 for(int i = 1; i <= n; i++){
  if(cnt[i] % 2 == 1) cout << 1;
  else cout << 0;
 }
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}