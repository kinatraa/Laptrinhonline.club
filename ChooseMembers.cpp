#include <stdio.h>
#include <math.h>

int main(){
 int n, d;
 scanf("%d", &n);
 if(n < 3) printf("0");
 else{
  d = n*(n-1)*(n-2)/6;
  printf("%d", d);
 }
}