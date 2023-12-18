#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, m, k;
 cin >> n >> m >> k;
 int bai = n/k, luu = m;
 if(m <= bai) cout << m;
 else{
  m -= bai;
  int tmp = 0;
  while(m > 0){
   ++tmp;
   m -= (k-1);
  }
  cout << bai-tmp;
 }
}