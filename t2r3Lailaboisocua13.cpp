#include <stdio.h>
#include <math.h>

long long tong(long long a, long long y){
 long long s = 0;
 for(long long i = a*13; i < y; i += 13){
  s += i;
 }
 return s;
}

int main(){
 long long x, y, s13, kq, tg;
 scanf("%lld%lld", &x, &y);
 if(x > y){
  tg = x;
  x = y;
  y = tg;
 }
 long long a = x/13 + 1;
 s13 = tong(a, y);
 if(x % 13 == 0) s13 += x;
 kq = y*(y+1)/2 - x*(x+1)/2 + x - s13;
 printf("%lld", kq);
}