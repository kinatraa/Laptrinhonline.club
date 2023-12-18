#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
 int n, cnt = 0;
 cin >> n;
 map<int, int> mp;
 priority_queue <int> q;
 priority_queue <int, vector<int>, greater<int>> p;
 for(int i = 0; i < n; i++){
  int x;
  cin >> x;
  mp[x]++;
 }
 for(auto it:mp){
  q.push(it.second);
 }
 for(auto it:mp){
  if(it.second == q.top()){
   p.push(it.first);
   ++cnt;
  } 
 }
 cout << q.top() <<endl;
 for(int i = 0; i < cnt; i++){
  cout << p.top() << " ";
  p.pop();
 }
}