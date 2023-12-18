#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int main(){
 long long a, b, c;
 cin >> a >> b;
 c = a + b;
 string x, y, z;
 stringstream ss;
 stringstream sss;
 stringstream ssss;
 ss << a;
 x = ss.str();
 sss << b;
 y = sss.str();
 ssss << c;
 z = ssss.str();
 for(int i = 0; i < x.size(); i++){
  if(x[i] == '0') x.erase(x.begin()+i);
 }
 stringstream q(x);
 q >> a;
 for(int i = 0; i < y.size(); i++){
  if(y[i] == '0') y.erase(y.begin()+i);
 }
 stringstream p(y);
 p >> b;
 for(int i = 0; i < z.size(); i++){
  if(z[i] == '0') z.erase(z.begin()+i);
 }
 stringstream o(z);
 o >> c;
 if(a + b == c) cout << "YES";
 else cout << "NO";
}