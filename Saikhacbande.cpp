#include <stdio.h>
#include <math.h>

int saik(int x, int y){
 int s = abs(x - y);
 return s;
}

int main(){
 int n, tong = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < n-1; i++){
  for(int j = i+1; j < n; j++){
   tong += saik(a[i], a[j]);
  }
 }
 printf("%d", tong);
}