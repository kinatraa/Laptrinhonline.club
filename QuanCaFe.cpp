#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
 int n;
 int dem = 1;
 int temp = 0;
 cin >> n;
 vector<pair<int,int>> a(n);
 for (int i = 0; i < n; i++)
 {
  cin >> a[i].first >> a[i].second;
 }
 sort(a.begin(), a.end());
 for (int i = 0; i < n - 1; i++)
 {
  if (a[i].first == a[i + 1].first && a[i].second == a[i + 1].second)
  {
   dem++;
  }
  else
  {
   temp = max(temp, dem);
   dem = 1;
  }
 }
 if (dem > temp)
 {
  cout << dem;
 }
 else
 {
  cout << temp;
 }
}