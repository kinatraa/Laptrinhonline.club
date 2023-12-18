#include<bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin >> n;
 int m = n*2-1;
 int cnt = 0;
 int s = n;
 while(m--){
  for(int i = 0; i < cnt; i++){
   cout << " ";
  }
  for(int i = 0; i < n; i++){
   cout << "*";
  }
  cout << endl;
  if(m >= s){
   n--;
   cnt += 2;
  } 
  else{
   cnt -= 2;
   n++;
  } 
 }
}