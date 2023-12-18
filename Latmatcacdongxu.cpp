#include <stdio.h>
#include <math.h>

int dem(int n){
 int a[n];
 int dem = 0;
 for(int i = 0; i < n; i++){
  a[i] = 1;
 }
 for(int i = 1; i <= n; i++){
  for(int j = 0; j < n; j++){
   if((j+1) % i == 0) a[j] *= (-1);
  }
 }
 for(int i = 0; i < n; i++){
  if(a[i] == 1) ++dem;
 }
 return dem;
}

int main(){
 int t;
 scanf("%d", &t);
 int a[t];
 for(int i = 0; i < t; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < t; i++){
  printf("%d\n", dem(a[i]));
 }
}