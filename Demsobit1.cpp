#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

using namespace std;
main(){
 faster();
 long long n; cin >> n;
 long long cnt = 0;
 long long f[50] = {0}; f[0] = 1;
 for (int i=1; i<50; i++){
  f[i] = f[i-1]*2+((1LL<<(i-1))-1);
 }
 while (n>0){
  long long b = log2(n);
  cnt+=f[b];
  b = 1LL<<b;
  cnt+=n-b;
  n-=b;
 }
 cout << cnt;
}