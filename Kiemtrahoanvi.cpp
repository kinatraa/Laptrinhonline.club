#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 ll a[n+1];
 for(int i = 1; i <= n; i++){
  cin >> a[i];
 }
 sort(a+1,a+n+1);
 for(int i = 1; i <= n; i++){
  if(a[i] != i){
   cout << "NO";
   return 0;
  }
 }
 cout << "YES";
}