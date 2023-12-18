#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 long long n, t;
 long long am = 0, s = 1, khong = 0, duong = 0;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> n;
  long long a[n];
  for (int j = 0; j < n; j++)
  {
   cin >> a[j];
  }
  for (int j = 0; j < n; j++)
  {
   if (a[j] < 0)
   {
    am += (-1 - a[j]);
    a[j] = -1;
   }
   else if (a[j] > 0)
   {
    duong += (a[j] - 1);
    a[j] = 1;
   }
   else if (a[j] == 0)
    ++khong;
  }
  for(int j = 0; j < n; j++) s*=a[j];
  if(s == 1) cout << am+duong << endl;
  else if(s == -1) cout << am+duong+2 << endl;
  else cout << am+duong+khong << endl;
  am = 0; duong = 0; khong = 0; s = 1;
 }
}