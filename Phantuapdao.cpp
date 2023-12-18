#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
 int n, cnt = 0;
 cin >> n;
 map<int, int> mp;
 for(int i = 0; i < n; i++){
  int x;
  cin >> x;
  mp[x]++;
 }
 for(auto it:mp){
  int x = it.second, y = it.first;
  if(x > n/2){
   cout << y;
   ++cnt;
   break;
  }
 }
 if(cnt == 0) cout << "khong co phan tu ap dao";
}