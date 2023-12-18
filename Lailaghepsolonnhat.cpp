#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int cmp(const void *a, const void *b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
 stringstream ss;
 string tmp1, tmp2;
    ss << x << y;
 tmp1 = ss.str();
 ss.str("");
 ss << y << x;
 tmp2 = ss.str();
 ss.str("");
    if(tmp1 < tmp2) return 1;
 else return 0;
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 ll a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
 }
 qsort(a,n,sizeof(ll),cmp);
 for(int i = 0; i < n; i++) cout << a[i];
}