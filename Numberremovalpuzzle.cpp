#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
 int n;
 long long s = 0;
 cin >> n;
 int a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
  s += a[i];
 }
 long long x = 0, y = 0, z;
 for(int i = 0; i < n; i++){
  z = max(y, x + a[i]);
  x = y;
  y = z;
 }
 cout << s-z;
}