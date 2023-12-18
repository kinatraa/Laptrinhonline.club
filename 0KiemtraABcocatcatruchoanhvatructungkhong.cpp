#include <stdio.h>
#include <math.h>

int main(){
 float a[2], b[2];
 scanf("%f%f%f%f", &a[0], &a[1], &b[0], &b[1]);
 if(a[0]*b[0] <= 0 && a[1]*b[1] <= 0) printf("YES");
 else printf("NO");
}