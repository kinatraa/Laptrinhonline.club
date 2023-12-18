#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 string a;
 cin >> a;
 int cnt = 0, x = a[0]-'0';
 for(long long i = 1; i < a.size(); i++){
  if(x < a[i]-'0'){
   cnt = 1;
   break;
  }
  else if(x > a[i]-'0'){
   cnt = -1;
   break;
  }
 }
 long long n = a.size();
 if(cnt == 1){
  while(n){
   cout << x+1;
   n--;
  }
  cout << endl;
  n = a.size();
  while(n){
   cout << x;
   n--;
  }
 }
 else if(cnt == -1){
  n = a.size();
  while(n){
   cout << x;
   n--;
  }
  n = a.size();
  cout << endl;
  while(n){
   cout << x-1;
   n--;
  }
 }
 else{
  n = a.size();
  while(n){
   cout << x;
   n--;
  }
  n = a.size();
  cout << endl;
  while(n){
   cout << x;
   n--;
  }
 }
}