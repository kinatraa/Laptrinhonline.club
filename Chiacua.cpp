#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll n, a[100];
ll res = 1000000000000000000;

void backtrack(int nguoi1, int nguoi2, int step){
 if(step == n){
  res = min(res, (ll)abs(nguoi1-nguoi2));
  return;
 }
 backtrack(nguoi1+a[step], nguoi2, step+1);
 backtrack(nguoi1, nguoi2+a[step], step+1);
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 for(int i = 0; i < n; i++) cin >> a[i];
 backtrack(0,0,0);
 cout << res;
}