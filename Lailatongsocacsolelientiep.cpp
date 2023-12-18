#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 long long x, y, temp, s = 0;
 scanf("%lld%lld", &x, &y);
 if(x == y) printf("0");
 else{
  if(x > y){
   temp = x;
   x = y;
   y = temp;
  }
  if(x % 2 == 0){
   for(int i = x+1; i < y; i+=2){
    s += i;
   }
   printf("%lld", s);
  }
  else{
   for(int i = x+2; i < y; i+=2){
    s += i;
   }
   printf("%lld", s);
  } 
 }
 
}