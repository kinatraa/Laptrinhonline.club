#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define int long long

main(){
 int t, a, b;
 scanf("%lld", &t);
 while(t--){
  scanf("%lld%lld", &a, &b);
  int x = round(pow(a*b, 1.0/3));
  if(x*x*x == a*b && a%x == 0 && b%x == 0) printf("Yes\n");
  else printf("No\n");
 }
}