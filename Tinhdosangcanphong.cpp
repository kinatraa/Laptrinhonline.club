#include <bits/stdc++.h>
#include <string>
#include <iomanip>
using namespace std;

int main(){
 int m;
 double n, k, s;
 cin >> n >> m >> k;
 s = n;
 for(int i = 0; i < k; i++){
  n /= m;
  s += n;
 }
 cout << fixed << setprecision(6) << s;
}