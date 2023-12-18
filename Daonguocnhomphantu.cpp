#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, k;
 scanf("%d%d", &n, &k);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 if(k >= n){
  for(int i = n-1; i >= 0; i--){
   printf("%d ", a[i]);
  }
 }
 else{
  int du = n % k;
  for(int i = k; i <= n-du ; i+=k){
   for(int j = i-1; j >= i-k; j--){
    printf("%d ", a[j]);
   }
  }
  if(du != 0){
   for(int i = n-1; i > n-1-du; i--){
    printf("%d ", a[i]);
   }
  }
 }
}