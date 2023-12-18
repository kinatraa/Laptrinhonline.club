#include<bits/stdc++.h>
using namespace std;
int main() {
 priority_queue <int> Max;
 priority_queue <int, vector<int>, greater<int>> Min;
 long long n;
 cin >> n;
 long long a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
  Max.push(a[i]);
  Min.push(a[i]);
 } 
 long long h = 1, k = 1;
 h *= Max.top();
 Max.pop();
 h*= Max.top();
 k *= Min.top();
 Min.pop();
 k*= Min.top();
 cout << max(h,k);
}