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
 vector <int> a;
 deque <int> q;
 int b[n];
 memset(b, -1, sizeof(b));
 for(int i = 0; i < n; i++){
  int x;
  cin >> x;
  a.push_back(x);
 }
 for(int i = 0; i < n; i++){
  if(q.empty()){
   q.push_back(i);
  }
  else{
   while(!q.empty()){
    if(a[i] >= a[q.back()]){
     q.pop_back();
    }
    else{
     b[i] = q.back();
     break;
    }
   }
   q.push_back(i);
  }
 }
 q.clear();
 for(int i = n-1; i >= 0; i--){
  if(q.empty()){
   q.push_back(i);
  }
  else{
   while(!q.empty()){
    if(a[i] >= a[q.back()]){
     q.pop_back();
    }
    else{
     if(b[i] == -1){
      b[i] = q.back();
     }
     else{
      if(abs(b[i]-i) > abs(q.back()-i)) b[i] = q.back();
     }
     break;
    }
   }
   q.push_back(i);
  }
 }
 for(int i = 0; i < n; i++){
  cout << b[i] << " ";
 }
}