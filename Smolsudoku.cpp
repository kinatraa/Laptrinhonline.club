#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int a[3][3];
 map <int,int> m;
 for(int i= 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
   cin >> a[i][j];
   ++m[a[i][j]];
  }
 }
 for(int i = 1; i <= 9; i++){
  if(m[i] == 0 || m[i] > 1){
   cout << "INVALID";
   return 0;
  }
 }
 cout << "VALID";
}