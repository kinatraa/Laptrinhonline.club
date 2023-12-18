#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int n;
stack <char> s;

void backtrack(string str, int dem1, int dem2){
 if(dem1 > n || dem2 > n) return;
 if(dem2 > dem1) return;
 if(str.size() == n*2){
  cout << str << endl;
  return;
 }
 backtrack(str+'(', dem1+1, dem2);
 backtrack(str+')', dem1, dem2+1);
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> n;
 backtrack("",0,0);
}