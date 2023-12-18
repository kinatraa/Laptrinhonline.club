#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

void solve()
{
    string s;
 int q;
 cin >> s >> q;
 char a[26];
 for(int i = 0; i < 26; i++){
  a[i] = 'a'+i;
 }
 while(q--){
  char type, x, y; cin >> type;
  if(type == 'R'){
   cin >> x >> y;
   for(int i = 0; i < 26; i++){
    if(a[i] == x){
     a[i] = y;
    }
   }
  }
  else if(type == 'D'){
   cin >> x;
   for(int i = 0; i < 26; i++){
    if(a[i] == x) a[i] = '!';
   }
  }
 }
 for(int i = 0; i < s.size(); i++){
  if(a[s[i]-'a'] != '!') cout << a[s[i]-'a'];
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}