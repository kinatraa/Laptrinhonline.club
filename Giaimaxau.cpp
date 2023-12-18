#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 ll n, sum = 0;
 cin >> n;
 ll a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
  sum += a[i];
 }
 sum /= (n-1);
 for(int i = 0; i < n; i++){
  cout << (char)(sum-a[i]);
 }
}