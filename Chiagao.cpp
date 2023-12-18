#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll a[100];
ll res = 1000000000000000;

void backtrack(ll n1, ll n2, ll n3, ll step, ll dem1, ll dem2, ll dem3){
 if(dem1 > 3 || dem2 > 3 || dem3 > 3) return;
 if(step == 9){
  res = min(res, max(max(n1,n2),n3) - min(min(n1,n2),n3));
  return;
 }
 backtrack(n1+a[step], n2, n3, step+1, dem1+1, dem2, dem3);
 backtrack(n1, n2+a[step], n3, step+1, dem1, dem2+1, dem3);
 backtrack(n1, n2, n3+a[step], step+1, dem1, dem2, dem3+1);
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 for(int i = 0; i < 9; i++){
  cin >> a[i];
 } 
 backtrack(0,0,0,0,0,0,0);
 cout << res;
}