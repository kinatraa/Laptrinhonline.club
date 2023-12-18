#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 fflush(stdin);
 int n;
 cin >> n;
 int a[n];
 for(int i = 0; i < n; i++) cin >> a[i];
 priority_queue <int, vector<int>> Max;
 priority_queue <int, vector<int>, greater<int>> Min;
 Max.push(a[0]);
 Min.push(a[0]);
 for(int i = 1; i < n; i++){
  int tmp = max(abs(a[i]-Max.top()), abs(a[i]-Min.top()));
  cout << tmp << " ";
  Max.push(a[i]);
  Min.push(a[i]);
 }
}