#include <bits/stdc++.h>
using namespace std;

int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 string a;
 getline(cin, a);
 deque <char> q;
 for(int i = 0; i < a.size(); i++){
  if(a[i] != '#') q.push_back(a[i]);
  else{
   if(!q.empty()) q.pop_back();
  }
 }
 int n = q.size();
 for(int i = 0; i < n; i++){
  cout << q.front();
  q.pop_front();
 }
}