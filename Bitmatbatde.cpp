#include <bits/stdc++.h>
#include <stack>
using namespace std;

void kt(){
 int n, x, m;
 cin >> n >> x;
 queue <int> a;
 for(int i = 1; i <= n; i++){
  a.push(i);
 }
 while(a.size() > 1){
  for(int i = 1; i < x; i++){
   m = a.front();
   a.push(m);
   a.pop();
  }
  a.pop();
 }
 cout << a.front();
}

int main(){
 kt();
}