#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int x, y, temp;
 scanf("%d%d", &x, &y);
 if(x > y){
  temp = x;
  x = y;
  y = temp;
 }
 if(abs(x-y) < 2) printf("0");
 else if(abs(x-y) == 2){
  if(x % 2 == 0) printf("%d", x+1);
  else printf("0");
 }
 else{
  int s = 0;
  for(int i = x+1; i < y; i++){
   if(i % 2 != 0) s+=i;
  }
  printf("%d", s);
 }
}