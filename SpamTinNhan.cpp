#include <iostream>
using namespace std;
#define endl "\n";

long csc(long x){
 return x*(x+1)/2;
}

long kt(long i, long k){
 if(i <= k) return csc(i);
 else return csc(k) + csc(k-1) - csc(k*2-1-i);
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 long t;
 cin >> t;
 while(t--)
 {
  long k, x;
  cin >> k >> x;
  long l = 1, r = 2*k-1;
  if(kt(2*k-1, k) <= x){
   cout << 2*k-1 << endl;
   continue;
  }
  while(l < r){
   long mid = (l+r)/2;
   long tmp = kt(mid,k);
   if(tmp >= x) r = mid;
   else l = mid+1;
  }
  cout << l << endl;
 }
}