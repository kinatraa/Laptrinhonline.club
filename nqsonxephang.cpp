#include <bits/stdc++.h>
#include <stack> 
using namespace std;

int dem = 0;

void kt(int a[], int n, int d[]){
 stack <int> b, c;
 b.push(a[0]);
 c.push(0);
 int i = 0;
 while(i < n){
  if(!b.empty() && !c.empty()){
   if(a[i] > b.top()){
   d[c.top()] = a[i];
   b.pop();
   c.pop();
  }
  else{
   b.push(a[i]);
   c.push(i);
   ++i;
  }
  }
  else{
   b.push(a[i]);
   c.push(i);
  }
 }
}

int main(){
 int n;
 cin >> n;
 int a[n], d[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
  d[i] = -1;
 }
 kt(a,n,d);
 for(int i = 0; i < n; i++){
  cout<<d[i]<<" ";
 }
}