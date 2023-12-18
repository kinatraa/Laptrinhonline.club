#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, a, b, c;
 cin >> n >> a >> b >> c;
 int ans = -1;
 for(int i = 0; i <= n/a; i++){
  for(int j = 0; j <= (n-i*a)/b; j++){
   int k = (n-i*a-j*b)/c;
   if(i*a + j*b + k*c == n){
    ans = max(ans, i+j+k);
   }
  }
 }
 cout << ans;
}