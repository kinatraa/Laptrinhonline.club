#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll Mod = 1000000007;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, m, cnt = 0;
 cin >> n >> m;
 string a[n], b[m];
 for (int i = 0; i < n; i++)
  cin >> a[i];
 for (int i = 0; i < m; i++)
  cin >> b[i];
 while(a[0].size() >= m)
 {
  int cnt = 0;
  for (int i = 0; i < n - m + 1; i++)
  {
   size_t found = a[i].find(b[0]);
   if (found != string::npos)
    ++cnt;
   else
    continue;
   for (int j = 1; j < m; j++)
   {
    size_t tmp = a[i + j].find(b[j]);
    if (tmp != found)
     break;
    else
     ++cnt;
   }
   if (cnt == m)
   {
    cout << "Yes";
    return 0;
   }
   else
    cnt = 0;
  }
  for(int  i = 0; i < n; i++){
   a[i].erase(0,m);
  }
 }
 cout << "No";
}