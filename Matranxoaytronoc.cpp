#include<stdio.h>
#include <math.h>

int main(){
 int n, dem = 1;
 scanf("%d", &n);
 int a[n][n];
 int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
 while(h1 <= h2 && c1 <= c2){
  for(int i = c1; i <= c2; i++){
   a[h1][i] = dem;
   ++dem;
  }
  ++h1;
  for(int i = h1; i <= h2; i++){
   a[i][c2] = dem;
   ++dem;
  }
  --c2;
  if(c1 <= c2){
   for(int i = c2; i >= c1; i--){
    a[h2][i] = dem;
    ++dem;
   }
   --h2;
  }
  if(h1 <= h2){
   for(int i = h2; i >= h1; i--){
    a[i][c1] = dem;
    ++dem;
   }
   ++c1;
  }
 }
 for(int i = 0 ; i < n; i++){
  for(int j = 0; j < n; j++){
   printf("%10d ", a[i][j]);
  }
  printf("\n");
 }
}