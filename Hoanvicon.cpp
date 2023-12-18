#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, cnt = 0;
 cin >> n;
 int min = n;
 deque <int> q;
 for(int i = 0; i < n; i++){
  int x;
  cin >> x;
  q.push_back(x);
 }
 while(n > 0){
  if(q.front() > q.back()){
   if(q.front() < min){
    min = q.front();
   }
   if(min == n) ++cnt;
   q.pop_front();
  }
  else{
   if(q.back() < min){
    min = q.back();
   }
   if(min == n) ++cnt;
   q.pop_back();
  }
  n--;
 } 
 cout << cnt;
}