#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

void solve()
{
 int t;
 cin >> t;
 while (t--)
 {
  int m, n;
  cin >> m >> n;
  vector<int> graph[m];
  while (n-- > 0)
  {
   int u, v;
   cin >> u >> v;
   graph[u].push_back(v);
   graph[v].push_back(u);
  }
  int root[m] = {};
  int step[m] = {};
  int bef[m] = {};
  int step_root[m] = {};
  queue<int> wait;
  int res = m*2;
  for (int v : graph[0])
  {
   root[v] = v;
   step_root[v] = 1;
   step[v] = 1;
   bef[v] = v;
   wait.push(v);
  }
  while (!wait.empty())
  {
   int u = wait.front();
   wait.pop();
   for (int v : graph[u])
   {
    if (v == 0)
     continue;
    if (bef[u] == v)
     continue;
    if (root[v] == 0)
    {
     wait.push(v);
     bef[v] = u;
     root[v] = root[u];
     step[v] = step[u] + 1;
     step_root[root[v]] = max(step_root[root[v]], step[v]);
     continue;
    }
    if (root[u] != root[v])
    {
     res = min(res, step[u] + step[v] + 1);
    }
   }
  }
  if (res == m * 2)
  {
   sort(step_root, step_root + m);
   cout << step_root[m - 1] + step_root[m - 2] + 1;
  }
  else
   cout << res;
  cout << endl;
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}