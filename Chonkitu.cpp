#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve()
{
 int t;
 cin >> t;
 string s;
 cin >> s;
 t -= 1;
 while (t--)
 {
  string str;
  cin >> str;
  for (int i = 0; i < str.size(); i++)
  {
   if (str[i] < s[i])
   {
    char tmp = str[i];
    s = s.substr(0, i) + tmp + str.substr(i + 1);
    break;
   }
  }
 }
 cout << s;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}