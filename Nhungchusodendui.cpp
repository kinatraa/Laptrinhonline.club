#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int cnt = 0, n, k, len;
vector <int> b;
map <int,int> a;
int ans = INT_MAX;

void backtrack(int sum, int step){
 if(sum >= n){
  ans = min(ans, sum);
  return;
 }
 if(step > len+1) return;
 for(int i = 0; i < b.size(); i++){
  if(step == 0 && b[i] == 0) continue;
  backtrack(sum*10+b[i], step+1);
 }
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 cin >> n >> k;
 len = log10(n)+1;
 for(int i = 0; i < k; i++){
  int x;
  cin >> x;
  a[x]++;
 }
 for(int i = 0; i <= 9; i++){
  if(a[i] == 0) b.push_back(i);
 }
 sort(b.begin(), b.end());
 backtrack(0,0);
 cout << ans;
}