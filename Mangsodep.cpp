#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
 int n, odd = 0, even = 0;
 scanf("%d", &n);
 for(int i = 0; i < n; i++){
  int x;
  scanf("%d", &x);
  if(x & 1) odd++;
  else even++;
 }
 printf("%d", (odd > even) ? even : odd);
}