#include <stdio.h>
#include <math.h>

int main(){
 int n;
 scanf("%d", &n);
 double a = 360.0/(2*n); a /= 180;
 double r = 1/sqrt(2 - 2*cos(a * 3.141592653589793238));
 double s = 2*sqrt(r*r - 0.25);
 printf("%.5lf", s);
}