#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define int long long

main(){
 int n, i, j, k, sum;
 scanf("%lld", &n);
 int a[n][n];
 for(i = 0; i < n; i++){
  for(j = 0; j < n; j++){
   scanf("%lld", &a[i][j]);
  }
 }
 for(j = n-1; j >= 0; j--){
  i = 0, k = j, sum = 0;
  while(i < n && k < n){
   sum += a[i++][k++];
  }
  printf("%lld\n", sum);
 }
 for(i = 1; i < n; i++){
  j = 0, k = i, sum = 0;
  while(j < n && k < n){
   sum += a[k++][j++];
  }
  printf("%lld\n", sum);
 }
}