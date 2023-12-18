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
 int n;
 cin >> n;
 if(n == 0){
  cout << 1;
  return 0;
 }
 if(n < 10){
  cout << n;
  return 0;
 }
 int m = log10(n)+1;
 int tmp, luu, ans = 0;
 for(int i = 1; i <= m; i++){
  tmp = n/(int)pow(10,m-i);
  n %= (int)pow(10,m-i);
  if(i == 1){
   luu = tmp;
   ans = luu;
   continue;
  }
  if(tmp > luu){
   ans += (tmp-luu);
   luu = tmp;
  }
 }
 cout << ans;
}