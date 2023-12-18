#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n;
 vector<int> a;
 stack<int> check;
 int kt = 0, cnt = 0, i = 0;
 while (cin >> n)
 {
  a.push_back(n);
  if (i > 0 && a[i] != 0 && a[i - 1] != 0)
   ++cnt;
  ++i;
  if (n == 0)
   continue;
  if (kt > 0)
   continue;
  if (check.empty())
   check.push(n);
  else
  {
   if (n > check.top())
    kt = 1;
   else if (n < check.top())
    kt = 2;
   else
    kt = 3;
  }
 }
 if (kt == 0)
 {
  int kc = 0, luu;
  for (int i = 0; i < a.size(); i++)
  {
   if (a[i] != 0)
   {
    kc = a[i];
    luu = i-1;
    break;
   }
  }
  if (kc == 0)
  {
   for (int i = 0; i < a.size(); i++)
   {
    cout << 0 << " ";
   }
  }
  else{
   i = luu-1;
   while(i >= 0){
    a[i] = a[i+1]-kc;
    i--;
   }
   i = luu+2;
   while(i < a.size()){
    a[i] = a[i-1]+kc;
    i++;
   }
   for (int i = 0; i < a.size(); i++)
   {
    cout << a[i] << " ";
   }
  }
 }
 if (kt == 3)
 {
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++)
  {
   cout << a[a.size() - 1] << " ";
  }
 }
 else if (kt == 1)
 {
  int luu, kc = -1;
  if (cnt == 0)
  {
   for (int i = 0; i < a.size(); i++)
   {
    if (a[i] != 0)
    {
     luu = i - 1;
     kc = a[i];
     break;
    }
   }
  }
  else
  {
   for (int i = 0; i < a.size() - 1; i++)
   {
    if (a[i] == 0 || a[i + 1] == 0)
     continue;
    kc = a[i + 1] - a[i];
    luu = i;
    break;
   }
  }
  i = luu - 1;
  while (i >= 0)
  {
   a[i] = a[i + 1] - kc;
   i--;
  }
  i = luu + 2;
  while (i < a.size())
  {
   a[i] = a[i - 1] + kc;
   ++i;
  }
  for (int i = 0; i < a.size(); i++)
  {
   cout << a[i] << " ";
  }
 }
 else if (kt == 2)
 {
  int luu, kc;
  if (cnt == 0)
  {
   for (int i = 0; i < a.size(); i++)
   {
    if (a[i] != 0)
    {
     luu = i;
     kc = -a[i];
     break;
    }
   }
  }
  else
  {
   for (int i = 1; i < a.size(); i++)
   {
    if (a[i] == 0 || a[i - 1] == 0)
     continue;
    kc = -(a[i - 1] - a[i]);
    luu = i - 1;
    break;
   }
  }
  i = luu - 1;
  while (i >= 0)
  {
   a[i] = a[i + 1] - kc;
   --i;
  }
  i = luu + 2;
  while (i < a.size())
  {
   a[i] = a[i - 1] + kc;
   ++i;
  }
  for (int i = 0; i < a.size(); i++)
  {
   cout << a[i] << " ";
  }
 }
}