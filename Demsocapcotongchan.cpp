#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 long long n, le = 0, chan = 0;
 scanf("%lld", &n);
 long long a[n];
 for(int i = 0; i < n; i++){
  scanf("%lld", &a[i]);
  if(a[i] % 2 == 0) ++chan;
  else ++le;
 }
 long long s = chan*(chan-1)/2 + le*(le-1)/2;
 printf("%lld", s);
}