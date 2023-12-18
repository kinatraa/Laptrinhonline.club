#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 ll t, n;
 cin >> t;
 while (t--)
 {
  cin >> n;
  int i = 1;
  ll res = 5;
  if (n <= 5)
  {
   if (n == 1)
    cout << "dangdungcntt\n";
   else if (n == 2)
    cout << "tienquanutc\n";
   else if (n == 3)
    cout << "quang123\n";
   else if (n == 4)
    cout << "maianh\n";
   else
    cout << "nguyenminhduc2820\n";
   continue;
  }
  ll buoc = 0;
  while (1)
  {
   for (int j = 1; j <= 5; j++)
   {
    res += i;
    buoc += i;
    if (buoc >= n)
    {
     if (j == 1)
      cout << "dangdungcntt\n";
     else if (j == 2)
      cout << "tienquanutc\n";
     else if (j == 3)
      cout << "quang123\n";
     else if (j == 4)
      cout << "maianh\n";
     else
      cout << "nguyenminhduc2820\n";
     break;
    }
   }
   if (buoc >= n)
    break;
   i *= 2;
  }
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}