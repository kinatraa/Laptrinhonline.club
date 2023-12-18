#include <bits/stdc++.h>
#include <stack>
using namespace std;

void kt(){
 queue <int> a;
 int n, x;
 cin >> n;
 for(int i = 0; i < n; i++){
  cin >> x;
  a.push(x);
 }
 for(int i = 0; i < n; i++){
  x = a.front();
  a.pop();
  a.push(x);
  cout << a.front() << " ";
  a.pop();
 }
}

int main(){
 kt();
}