#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
ll Mod = 1000000007;

ll ans = 0;
string a[100000] = {""};
ll so[100000];

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 string s;
 cin >> s;
 int cnt = 0;
 for(int i = 0; i < s.size(); i++){
  if(s[i] == '+'){
   stringstream ss(a[cnt]);
   ss >> so[cnt];
   ss.clear();
   ++cnt;
   continue;
  }
  a[cnt] += s[i];
 }
 stringstream ss(a[cnt]);
 ss >> so[cnt];
 cnt++;
 for(int i = 0; i < cnt; i++){
  ans += so[i];
 }
 cout << ans;
}