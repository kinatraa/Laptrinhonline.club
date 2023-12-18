#include <stdio.h>

int main(){
 int a[10000], dem = 0, tong = 0;
 while(1){
  scanf("%d", &a[dem]);
  if(a[dem] < 0) break;
  else{
   tong += a[dem];
   ++dem;
  } 
 }
 printf("%.2f", (float)tong/dem);
}