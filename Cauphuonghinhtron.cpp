#include <stdio.h>
#include <math.h>

double p = 3.1415926535897932384626433;

int main(){
 int n;
 scanf("%d", &n);
 double x = sqrt(p);
 x = round(x*n);
 printf("%.lf", x);
}