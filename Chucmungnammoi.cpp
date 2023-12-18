#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int n;
string s;
vector <string> a;

void output(){
 int k = 1, m;
 string tmp = "";
 for(int i = 0; i < n/2; i++){
  m = (n*3 - k*3)/2;
  tmp = "";
  for(int j = 0; j < m; j++){
   cout << "-";
   tmp += "-";
  } 
  for(int j = 0; j < k; j++){
   cout << s;
   tmp += s;
  } 
  for(int j = 0; j < m; j++){
   cout << "-";
   tmp += "-";
  }
  cout << endl;
  tmp += "\n";
  a.push_back(tmp);
  k+=2;
 }
 m = (n*3 - 17)/2;
 for(int j = 0; j < m; j++){
  cout << "-";
 }
 cout << "CHUC MUNG NAM MOI";
 for(int j = 0; j < m; j++){
  cout << "-";
 }
 cout << endl;
 for(int i = a.size()-1; i >= 0; i--){
  cout << a[i];
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 fflush(stdin);
 cin >> s;
 output();
}