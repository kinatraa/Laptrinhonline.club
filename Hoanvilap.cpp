#include <bits/stdc++.h>
using namespace std;
#define ll long long

string a;
int len, cnt = 0;
bool check[100000] = {};
string b[100000];
map <string,int> luu;

void backtrack(string s, int step){
 if(step == len){
  if(luu[s] != 0) return;
  luu[s]++;
  b[cnt] = s;
  ++cnt;
  return;
 }
 for(int i = 0; i < len; i++){
  if(check[i]){
   continue;
  } 
  check[i] = true;
  backtrack(s+(char)a[i], step+1);
  check[i] = false;
 }
}

int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> a;
 len = a.size();
 backtrack("",0);
 sort(b, b+cnt);
 for(int i = 0; i < cnt; i++){
  cout << b[i] << endl;
 }
}