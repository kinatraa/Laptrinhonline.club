#include <stdio.h>
#include <math.h>

int main(){
 float a, b, c, x1, x2;
 scanf("%f%f%f", &a, &b, &c);
 if(a == 0){
  if(b == 0){
   if(c == 0) printf("-1");
   else printf("0");
  }
  else{
   if(c == 0) printf("1");
   else{
    if(-c/b > 0) printf("2");
    else printf("0");
   }
  }
 }
 else{
  float delta = b*b - 4*a*c;
  if(delta < 0) printf("0");
  else if(delta == 0){
   x1 = -b/(2*a);
   if(x1 > 0) printf("2");
   else if(x1 == 0) printf("1");
   else printf("0");
  }
  else{
   x1 = (-b + sqrt(delta))/(2*a);
   x2 = (-b - sqrt(delta))/(2*a);
   if(x1 > 0 && x2 > 0) printf("4");
   else if((x1 == 0 && x2 == 0) || (x1 == 0 && x2 < 0) || (x2 == 0 && x1 < 0))  printf("1");
   else if(x1 < 0 && x2 < 0) printf("0");
   else if((x1 > 0 && x2 < 0) || (x1 < 0 && x2 > 0)) printf("2");
   else if((x1 == 0 && x2 > 0) || (x1 > 0 && x2 == 0)) printf("3");
  }
 }
}