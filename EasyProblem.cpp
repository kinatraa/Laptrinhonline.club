#include <stdio.h>
#include <math.h>

int main() {
 int n,cnt = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0 ; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < n; i++){
  for(int j = 1; pow(j, 2) <= a[i]; j++){
   if(a[i] % (j*j) == 0){
    cnt = j;
   }
  }
  printf("%d %d\n", cnt, a[i]/(cnt*cnt));
 }
 
}