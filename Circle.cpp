#include <stdio.h>
#include <math.h>

int main(){
 float n;
 scanf("%f", &n);
 if(n < 0) printf("NO CIRCLE");
 else{
  printf("%.2f\n%.2f", 2*3.14*n, 3.14*n*n);
 }
}