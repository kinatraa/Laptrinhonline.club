#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int n, k, cnt = 0;

void backtrack(int step, int sum, int ans){
 if(step == n){
  if(sum == k){
   cout << ans << endl;
   ++cnt;
  }
  return;
 }
 if(cnt != 0) return;
 for(int i = 0; i <= 9; i++){
  if(step == 0 && i == 0) continue;
  backtrack(step+1, sum+i, ans*10+i);
  if(cnt != 0) return;
 }
}

int main() 
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int t;
 cin >> t;
 while(t--){
  cin >> n >> k;
  if(k > n*9){
   cout << "-1\n";
   continue;
  } 
  backtrack(0,0,0);
  cnt = 0;
 }
}