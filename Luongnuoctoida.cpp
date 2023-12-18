#include <stdio.h>

long long tong = 0;
int max1 = -1, max2;

void tim(int a[], int n){
 for(int i = 0; i < n; i++){
  if(a[i] >= max1){
   max2 = max1;
   max1 = a[i];
  }
  else if(a[i] > max2){
   max2 = a[i];
  }
 }
}

void tinh(int a[], int x, int n){
 for(int i = 0; i < n; i++){
  if(a[i] != max1){
   tong += (x - a[i]);
  }
 }
}

int main(){
 int n;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 tim(a, n);
 tinh(a,max2, n);
 printf("%lld", tong);
}