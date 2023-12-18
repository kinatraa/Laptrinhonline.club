#include <stdio.h>
#include <math.h>

int main(){
 double a[2], b[2], c[2], x, y;
 for(int i = 0; i < 2; i++){
  scanf("%lf%lf%lf", &a[i], &b[i], &c[i]);
 }
 double d = a[0] / a[1];
 a[1] *= d;
 b[1] *= d;
 c[1] *= d;
 b[1] -= b[0];
 c[1] -= c[0];
 if(b[1] == 0){
  if(c[1] == 0) printf("HE PHUONG TRINH VO SO NGHIEM");
  else printf("HE PHUONG TRINH VO NGHIEM");
 }
 else{
  y = c[1] / b[1];
  x = (c[0] - b[0]*y) / a[0];
  printf("x = %.3f\ny = %.3f", x, y);
 }
 
}