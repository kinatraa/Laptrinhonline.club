#include <stdio.h>
#include <math.h>

int main(){
 int n, l[1000], c[1000],x = 0, y = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < n; i++){
  if(a[i] % 2 == 0) c[x++] = a[i];
  else l[y++] = a[i];
 }
 for(int i = 0; i < y; i++) printf("%d ", l[i]);
 for(int i = (x-1); i >= 0; i--) printf("%d ", c[i]);
}