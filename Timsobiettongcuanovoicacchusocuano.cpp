#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, cnt = 0;
 cin >> n;
 int len = log10(n) + 1;
 for (int i = (int)(n - 9 * len); i < n; i++)
 {
  int sum = 0;
  int temp = i;
  while (temp > 0)
  {
   sum += temp % 10;
   temp /= 10;
  }
  if (i + sum == n)
  {
   cout << i << " ";
   ++cnt;
  }
 }

 if (cnt == 0)
 {
  cout << -1;
 }
 return 0;
}