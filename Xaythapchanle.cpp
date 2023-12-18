#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//void sx(int a[], int n){
// int temp;
// for(int i = 0; i < n-1; i++){
//  for(int j = i+1; j < n; j++){
//   if(a[i] < a[j]){
//    temp = a[i];
//    a[i] = a[j];
//    a[j] = temp;
//   }
//  }
// }
//}

int kt(int a){
 if(a % 2 == 0) return 0;
 else return 1;
}

int cmp(const void * a, const void * b){
   return ( *(int*)b - *(int*)a );
}

int main(){
 int n;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 qsort(a, n, sizeof(int), cmp);
 long long tong = a[0], temp = kt(a[0]);
 for(int i = 1; i < n; i++){
  if(kt(a[i]) != temp){
   temp = abs(temp - 1);
   tong += a[i];
  }
 }
 printf("%lld", tong);
}