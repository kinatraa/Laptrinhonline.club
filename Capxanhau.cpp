#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 5;
const int M = 1e3 + 5;
int n, K, a[N];
multiset <int> dis;
deque <int> dq[M];

int main() {
 cin >> n >> K;
 for (int i = 1; i <= n; i++) cin >> a[i];
 dis.insert(0);
 for (int i = 1; i <= K; i++) {
  if (dq[a[i]].size() >= 2) dis.erase(dis.lower_bound(dq[a[i]].back() - dq[a[i]].front()));
  dq[a[i]].push_back(i);
  if (dq[a[i]].size() >= 2) dis.insert(dq[a[i]].back() - dq[a[i]].front());
 }
 cout << *(--dis.end()) << ' ';
 for (int i = K + 1; i <= n; i++) {
  if (dq[a[i - K]].size() >= 2) dis.erase(dis.lower_bound(dq[a[i - K]].back() - dq[a[i - K]].front()));
  dq[a[i - K]].pop_front();
  if (dq[a[i - K]].size() >= 2) dis.insert(dq[a[i - K]].back() - dq[a[i - K]].front());
  if (dq[a[i]].size() >= 2) dis.erase(dis.lower_bound(dq[a[i]].back() - dq[a[i]].front()));
  dq[a[i]].push_back(i);
  if (dq[a[i]].size() >= 2) dis.insert(dq[a[i]].back() - dq[a[i]].front());
  cout << *(--dis.end()) << ' ';  
 }
}