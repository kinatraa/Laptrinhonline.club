#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 int n, res = 0, i, j;
 cin >> n;
 int a[n+1] = {};
 vector<int> snt;
 for(i = 2; i <= sqrt(n); i++){
  if(a[i] == 0){
   for(j = i*i; j <= n; j+=i){
    a[j] = 1;
   }
  }
 }
 for(i = 2; i <= n; i++){
  if(a[i] == 0) snt.push_back(i); 
 }
 int len = snt.size();
 for(i = 0; snt[i] <= n/3; i++){
  for(j = i; j < len-1; j++){
   if(snt[i] + snt[j]*2 > n){
    break;
   }
   if(a[n-snt[i]-snt[j]] == 0){
    ++res;
   }
  }
 }
 cout << res;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}