#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll luu = 0;

void tinh(ll a[], ll n){
 ll m = a[0];
 for(ll i = n-1; i >= 0; i--){
  if(a[i] == m) break;
  luu += (a[i]-m);
 }
}

ll lon(ll a[], ll mid, ll n){
 ll res = 0;
 for(ll i = n-1; i >= 0; i--){
  if(a[i] >= mid) res += (a[i]-mid);
 }
 return res;
}

ll nho(ll a[], ll mid, ll n){
 ll res = 0;
 res = luu + (a[0]-mid)*n;
 return res;
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 ll n, k;
 cin >> n >> k;
 ll a[n];
 for(ll i = 0; i < n; i++) cin >> a[i];
 sort(a, a+n);
 tinh(a,n);
 ll miN = a[0], maX = a[n-1];
 ll l = 0, r = maX;
 ll tmp;
 while(l < r){
  ll mid = (l+r)/2;
  if(mid == miN) tmp = luu;
  else if(mid > miN) tmp = lon(a,mid,n);
  else tmp = nho(a,mid,n);
  if(tmp < k) r = mid;
  else l = mid+1;
 }
 cout << l-1;
}