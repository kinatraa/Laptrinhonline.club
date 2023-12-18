#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int kt[1000000] = {0};

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, x;
 cin >> n;
 int a[n];
 int luu[n] = {0};
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 int q;
 cin >> q;
 int truyvan[q];
 priority_queue <int, vector<int>> sx;
 for(int i = 0; i < q; i++){
  cin >> truyvan[i];
  sx.push(truyvan[i]-1);
 } 
 while(!sx.empty()){
  int cnt = 0;
  for(int i = sx.top(); i < n; i++){
   if(luu[i] != 0){
    cnt += luu[i];
    break;
   }
   if(kt[a[i]] == 0){
    kt[a[i]]++;
    ++cnt;
   }
  }
  luu[sx.top()] = cnt;
  sx.pop();
 }
 for(int i = 0; i < q; i++){
  cout << luu[truyvan[i]-1] << endl;
 }
}