#include <stdio.h>
#include <math.h>

int main(){
 int a, b, h, s = 0, dem = 0;
 scanf("%d%d%d", &a, &b, &h);
 while(1){
  ++dem;
  s += a;
  if(s >= h) break;
  s -= b;
 }
 printf("%d", dem);
}