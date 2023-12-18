#include <stdio.h>
#include <math.h>

int main(){
 long long n, d;
 double s;
 scanf("%lld", &n);
 if(n < 0) printf("ERROR");
 else{
  d = n / 50;
  s = (double)n/2 + d*5;
  if(n % 2 == 0) printf("%.lf", s); 
  else printf("%.1lf", s); 
 }
}