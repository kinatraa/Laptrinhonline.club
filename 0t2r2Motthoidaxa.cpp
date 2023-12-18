#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d", &n);
 int a[n], b[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  b[i] = 2015 - a[i];
 }
 for(int i = 0; i < n; i++){
  if(b[i] > 0) printf("%d A.D.\n", b[i]);
  else printf("%d B.C.\n", -b[i] + 1);
 }
}