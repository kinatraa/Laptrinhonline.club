#include <stdio.h>
#include <math.h>

int main(){
 int n, k, x;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 scanf("%d%d", &k, &x);
 if(k == 0){
  printf("%d ", x);
  for(int i = 0; i < n; i++){
   printf("%d ", a[i]);
  }
 }
 else if(k == n){
  for(int i = 0; i < n; i++){
   printf("%d ", a[i]);
  }
  printf("%d ", x);
 }
 else{
  for(int i = 0; i < n; i++){
   printf("%d ", a[i]);
   if(i == k-1) printf("%d ", x);
  } 
 }
 
}