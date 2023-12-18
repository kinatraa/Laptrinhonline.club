#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d", &n);
 double a = 3;
 if(n == 0) printf("%.10lf", a);
 else{
  double s = 0;
  for(int i = 0; i < n; i++){
   s += 6;
   s = 1/s;
  }
  printf("%.10lf", a+s);
 }
}