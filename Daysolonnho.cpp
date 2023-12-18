#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 priority_queue<long long, vector<long long>, greater<long long>> min;
 priority_queue<long long, vector<long long>> max;
 int n;
 cin >> n;
 long long a[n];
 for(int i = 0; i < n; i++) cin >> a[i];
 for(int i = 0; i < n; i++){
  min.push(a[i]);
  max.push(a[i]);
  if(i >= 1){
   long long x = max.top() + min.top()/2;
   long long y = min.top() - max.top()/2;
   min.push(x);
   max.push(x);
   min.push(y);
   max.push(y);
   cout << (max.top()+min.top())/2 << " ";
  }
 }
}