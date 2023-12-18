#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 int n;
 cin >> n;
 vector <int> a(n);
 int chan = 0, le = 0;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  if(a[i] % 2 == 0) ++chan;
  else ++le;
 }
 if(le % 2 != 0){
  cout << "NO";
  return 0;
 }
 if(chan == n){
  cout << 0;
  return 0;
 }
 if(le == n){
  cout << n;
  return 0;
 }
 int cnt = 0;
 for(int i = 0; i < n-1; i++){
  if(a[i] % 2 != 0){
   a[i]++;
   a[i+1]++;
   cnt += 2;
  }
 }
 cout << cnt;
}