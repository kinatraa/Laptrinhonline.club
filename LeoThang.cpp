#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int n, cnt = 0, tmp = 0;

void backtrack(int sum){
 if(sum == n){
  ++cnt;
  return;
 }
 if(sum > n){
  ++tmp;
  return;
 }
 for(int i = 1; i <= 3; i++){
  backtrack(sum+i);
  if(tmp != 0){
   tmp = 0;
   return;
  }
 }
}

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 backtrack(0);
 cout << cnt;
}