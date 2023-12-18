#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int x, z;
 scanf("%d", &x);
 while(1){
  scanf("%d", &z);
  if(z > x) break;
 }
 int s = 0, dem = 0;
 for(int i = x; ; i++){
  ++dem;
  s += i;
  if(s > z) break;
 }
 printf("%d", dem);
}