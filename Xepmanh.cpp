#include <stdio.h>

int main(){
 int a, b, dem = 0;
 scanf("%d%d", &a, &b);
 int max = (a>=b)?a:b;
 int min = (a<=b)?a:b;
 if(min >= 4){
  dem += 2*(min/4);
  min -= (dem/2)*4;
  max -= (dem/2)*4;
  if(min > 0 && max >= 3) ++dem;
 }
 else{
  if(min > 0 && max >= 3) ++dem;
 }
 printf("%d", dem);
}