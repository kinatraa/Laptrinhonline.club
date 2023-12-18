#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
 int n, m;
 scanf("%d%d", &n, &m);
 int x = n%10, y = x;
 for(int i = 2; i <= m; i++){
  x *= y;
  x %= 10;
 }
 printf("%d", x);
}