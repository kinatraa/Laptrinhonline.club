#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, cnt = 0;
int a[1000];

void backtrack(int m){
    if(m == n){
  for(int i = 0; i < m; i++){
   cout << a[i] << " ";
  }
  cout << endl;
  ++cnt;
  return;
 }
 for(int i = 0; i < 3; i++){
  a[m] = i;
  if(m > 0){
   if((a[m] + a[m-1]) % 3 == 0) continue;
   if(a[m] == a[m-1]) continue;
  }
  backtrack(m+1);
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