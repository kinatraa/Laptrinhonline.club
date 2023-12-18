#include <stdio.h>
#include <math.h>

int tong(int a, int y){
 int s = 0;
 for(int i = a*13; i < y; i += 13){
  s += i;
 }
 return s;
}

int main(){
 int x, y, s13, kq, tg;
 scanf("%d%d", &x, &y);
 if(x > y){
  tg = x;
  x = y;
  y = tg;
 }
 int a = x/13 + 1;
 s13 = tong(a, y);
 if(x % 13 == 0) s13 += x;
 kq = y*(y+1)/2 - x*(x+1)/2 + x - s13;
 printf("%d", kq);
}