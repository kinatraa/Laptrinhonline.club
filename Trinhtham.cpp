#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 int n, k;
 cin >> n >> k;
 vector <int> a(n);
 deque <int> s;
 for(int i = 0; i < n; i++){
  cin >> a[i];
  while(!s.empty() && a[s.back()] < a[i]) s.pop_back();
  s.push_back(i);
  if(i < k-1) continue;
  while(i - s.front() >= k) s.pop_front();
  cout << a[s.front()] << " ";
 }
}