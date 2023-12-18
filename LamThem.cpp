#include <stdio.h>
#include <math.h>

int main(){
 long long n, s = 1;
 scanf("%lld", &n);
 for(int i = 1; i <= n; i++){
  s *= i;
 }
 printf("%lld", s);
}