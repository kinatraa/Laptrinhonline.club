#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, cnt = 0;
 cin >> n;
 vector <int> a(n);
 for(int i = 0; i < n; i++){
  cin >> a[i];
  if(i != 0){
   if(a[i] == a[i-1] && a[i] == 1) ++cnt;
  }
 }
 if(cnt != 0){
  cout << "khong qua duoc suoi";
 }
 else{
  int i = 0;
  cnt = 0;
  while(i < n-1){
   if(a[i+2] == 0){
    i += 2;
   }
   else ++i;
   ++cnt;
  }
  cout << cnt;
 }
}