#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n, m;
 cin >> n >> m;
 vector <pair<int,int>> a;
 int x, y;
 for(int i = 0; i < n; i++){
  cin >> x >> y;
  a.push_back(make_pair(x,y));
 }
 sort(a.begin(), a.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
  if(a.first == b.first) return a.second < b.second;
        else return a.first < b.first;
    });
 int dau = a[0].first, cuoi = a[0].second;
 int sum = 0;
 for(int i = 1; i < n; i++){
  if(a[i].first > cuoi){
   sum += (cuoi-dau);
   dau = a[i].first;
   cuoi = a[i].second;
  }
  else{
   cuoi = (a[i].second > cuoi)? a[i].second : cuoi;
  }
 }
 sum += (cuoi-dau);
 cout << m - sum;
}