#include <stdio.h>

int main(){
 int a, b, c, d;
 scanf("%d%d%d%d", &a, &b, &c, &d);
 if(a > d || c > b) printf("0");
 else{
  if(a >= c && b <= d) printf("%d", b-a);
  else if(a >= c && b > d) printf("%d", d - a);
  else if(a < c && b > d) printf("%d", d-c);
  else if(a < c && b <= d) printf("%d", b-c);
 }
}