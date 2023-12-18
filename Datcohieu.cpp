#include <stdio.h>
#include <math.h>

int main(){
 int n, dem = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 int max = a[0], min = a[0];
 for(int i = 0; i < n; i++){
  if(a[i] > max) max = a[i];
  if(a[i] < min) min = a[i];
 }
 if(max == min) printf("%d", n);
 else{
  for(int i = 0; i < n; i++){
   if(a[i] == max) ++dem;
   else if(a[i] == min) ++dem;
  }
  printf("%d", dem);
 }
 
}