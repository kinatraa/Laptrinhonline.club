#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define int long long
using namespace std;

vector<int> seg[1000005];

void build(int ci, int st, int end, pair<int, int> *B)
{
 if (st == end)
 {
  seg[ci].push_back(B[st].second);
  return;
 }
 int mid = (st + end) / 2;
 build(2 * ci + 1, st, mid, B);
 build(2 * ci + 2, mid + 1, end, B);
 merge(seg[2 * ci + 1].begin(), seg[2 * ci + 1].end(),
    seg[2 * ci + 2].begin(), seg[2 * ci + 2].end(),
    back_inserter(seg[ci]));
}

int query(int ci, int st, int end, int l, int r, int k)
{
 if (st == end)
  return seg[ci][0];
 int p = upper_bound(seg[2 * ci + 1].begin(),
      seg[2 * ci + 1].end(), r) -
   lower_bound(seg[2 * ci + 1].begin(),
      seg[2 * ci + 1].end(), l);

 int mid = (st + end) / 2;
 if (p >= k)
  return query(2 * ci + 1, st, mid, l, r, k);
 else
  return query(2 * ci + 2, mid + 1, end, l, r, k - p);
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);
 int n, k;
 cin >> n >> k;
 int x = ceil(k*1.0/2);
 vector<int> arr(n);
 for(int i = 0; i < n; i++) cin >> arr[i];
 pair<int, int> B[n];
 for (int i = 0; i < n; i++)
 {
  B[i] = {arr[i], i};
 }
 sort(B, B + n);
 build(0, 0, n - 1, B);
 for(int i = 0; i < n-k+1; i++){
  cout << arr[query(0, 0, n - 1, i, i+k-1, x)] << " ";
 }
}