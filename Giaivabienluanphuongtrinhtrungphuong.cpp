#include <stdio.h>
#include <math.h>

int main(){
 float a, b, c, x1, x2, d, e;
 scanf("%f%f%f", &a, &b, &c);
 if(a == 0){
  if(b == 0){
   if(c == 0) printf("vo so nghiem");
   else printf("vo nghiem");
  }
  else{
   if(c == 0) printf("0.000");
   else{
    if(-c/b > 0){
     d = sqrt(-c/b);
     printf("%.3f\n%.3f", d, -d);
    }
    else printf("vo nghiem");
   }
  }
 }
 else{
  float delta = b*b - 4*a*c;
  if(delta < 0) printf("vo nghiem");
  else if(delta == 0){
   x1 = -b/(2*a);
   if(x1 > 0){
    d = sqrt(x1);
    printf("%.3f\n%.3f", d, -d);
   }
   else if(x1 == 0) printf("0.000");
   else printf("vo nghiem");
  }
  else{
   x1 = (-b + sqrt(delta))/(2*a);
   x2 = (-b - sqrt(delta))/(2*a);
   if(x1 > 0 && x2 > 0){
    d = sqrt(x1);
    e = sqrt(x2);
    printf("%.3f\n%.3f\n", d, -d);
    printf("%.3f\n%.3f", e, -e);
   }
   else if((x1 == 0 && x2 == 0) || (x1 == 0 && x2 < 0) || (x2 == 0 && x1 < 0))  printf("0.000");
   else if(x1 < 0 && x2 < 0) printf("vo nghiem");
   else if(x1 > 0 && x2 < 0){
    e = sqrt(x1);
    printf("%.3f\n%.3f", e, -e);
   }
   else if(x1 < 0 && x2 > 0){
    e = sqrt(x2);
    printf("%.3f\n%.3f", e, -e);
   }
   else if(x1 == 0 && x2 > 0){
    d = sqrt(x2);
    printf("0.000\n%.3f\n%.3f", d, -d);
   }
   else if(x1 > 0 && x2 == 0){
    d = sqrt(x1);
    printf("0.000\n%.3f\n%.3f", d, -d);
   }
  }
 }
}