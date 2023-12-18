#include <stdio.h>
#include <string.h>

void sx(int a[], int n){
 int temp;
 for(int i = 0 ; i < n-1; i++){
  for(int j = i+1; j < n; j++){
   if(a[i] < a[j]){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
}

int min(int a, int b){
 int c = (a < b) ? a : b;
 return c;
}

int main(){
 int n, k;
 scanf("%d%d", &n, &k);
 int a[n], b[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 sx(a,n);
 int tong = 0;
 for(int i = 0; i < min(n,k); i++){
  tong += a[i];
 }
 printf("%d", tong);
}