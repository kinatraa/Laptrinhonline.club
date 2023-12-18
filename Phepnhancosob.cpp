#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

string Char = "0123456789abcdef";
int b;

void change(string x, vector<int> &Decx){
 int lenx = x.size();
 for(int i = lenx - 1; i >= 0; i--){
  if(x[i] >= '0' && x[i] <= '9'){
   Decx.push_back(x[i]-'0');
  }
  else Decx.push_back(x[i]-'a'+10);
 }
}

void multiply(vector<int> Decx, vector<int> Decy, deque<char> &a){
 int res[Decx.size() + Decy.size() + 5] = {0};
 for(int i = 0; i < Decx.size(); i++){
  for(int j = 0; j < Decy.size(); j++){
   res[i+j] += Decx[i]*Decy[j];
  }
 }
 for(int i = 0; i < Decx.size() + Decy.size(); i++){
  a.push_front(Char[res[i]%b]);
  res[i+1] += res[i]/b;
 }
 if(a.front() == '0') a.pop_front();
}

void solve()
{
 string x, y;
 cin >> b >> x >> y;
 vector<int> Decx;
 vector<int> Decy;
 change(x,Decx);
 change(y,Decy);
 deque<char> res;
 multiply(Decx, Decy, res);
 while(!res.empty()){
  cout << (char)res.front();
  res.pop_front();
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}