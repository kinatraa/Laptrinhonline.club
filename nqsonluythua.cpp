#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

struct cnt{
 ll hai, nam;
};

cnt a[1000005] = {0};

void backtrack(ll tmp, ll hai, ll nam){
 if(tmp > 1000004) return;
 a[tmp].hai = hai;
 a[tmp].nam = nam;
 backtrack(tmp*2, hai+1, nam);
 backtrack(tmp*5, hai, nam+1);
}

int snt(int n){
 for(int i = 2; i <= sqrt(n); i++){
  if(n % i == 0) return 0;
 }
 return 1;
}

int main(){
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 backtrack(1,0,0);
 ll tmp, hai = 0, nam = 0;
 for(int i = 3; i <= 500000; i+=2){
  if(i == 5) continue;
  if(snt(i) == 1){
   tmp = i;
   while(tmp <= 500000){
    backtrack(tmp, 0, 0);
    tmp *= i;
   }
  }
 }
 for(int i = 1; i <= 1000000; i++){
  if(i % 2 != 0 && i % 5 != 0) continue;
  if(a[i].hai != 0 || a[i].nam != 0) continue;
  tmp = i;
  while(tmp % 2 == 0){
   ++a[i].hai;
   tmp /= 2;
  }
  while(tmp % 5 == 0){
   ++a[i].nam;
   tmp /= 5;
  }
 }
 // for(int i = 1; i <= 1000; i++){
 //  cout << i << " " << a[i].hai << " " << a[i].nam << endl;
 // }
 int n;
 cin >> n;
 vector <int> b(n);
 ll sum = 0;
 for(int i = 0; i < n; i++){
  cin >> b[i];
  sum += b[i];
 }
 for(int i = 0; i < n; i++){
  hai += a[b[i]].hai*(sum-b[i]);
  nam += a[b[i]].nam*(sum-b[i]);
 }
 cout << min(hai,nam);
}