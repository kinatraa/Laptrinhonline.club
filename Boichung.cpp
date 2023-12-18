#include <stdio.h>
#include <math.h>

int main(){
 long long n;
 scanf("%lld", &n);
 if(n % 2 != 0) printf("%lld", n*(n-1)*(n-2));
 else{
  if(n % 3 == 0) printf("%lld", (n-1)*(n-2)*(n-3));
  else printf("%lld", n*(n-1)*(n-3));
 }
}