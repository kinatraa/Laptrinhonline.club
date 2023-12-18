#include <stdio.h>

int main(){
 long long x, y, s, d = 0, cnt = 0;
 scanf("%lld%lld%lld", &x, &y, &s);
 for(int i = 1; d < s ; i++){
  ++d;
  ++cnt;
  if(i % x == 0) d+=y;
 }
 printf("%lld", cnt);
}