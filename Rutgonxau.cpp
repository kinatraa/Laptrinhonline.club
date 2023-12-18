#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 string s;
 cin >> s;
 deque <char> q;
 for(int i = 0; i < s.size(); i++){
  if(q.empty()) q.push_back(s[i]);
  else{
   if(s[i] != q.back()) q.push_back(s[i]);
  }
 }
 while(!q.empty()){
  cout << q.front();
  q.pop_front();
 }
}