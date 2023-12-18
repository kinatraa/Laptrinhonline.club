#include <stdio.h>
#include <math.h>

int main(){
 int n, i;
 scanf("%d", &n);
 int a[n], l = 0, c = 0, deml = 0, demc = 0;
 for(i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(i = 0; i < n; i++){
  if(a[i] % 2 == 0){
   c += a[i];
   demc++;
  }
  else{
   l += a[i];
   deml++;
  }
 }
 if(deml == 0) printf("0\n");
 else printf("%d\n", l/deml);
 if(demc == 0) printf("0");
 else printf("%d", c/demc);
}