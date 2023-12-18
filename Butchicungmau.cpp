#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
 int n, x = 0, y = 0, dem = 0;
 scanf("%d", &n);
 int a[n], b[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  b[i] = 0;
 }
 while(x < n-1){
  if(a[x] == a[x+1]){
   ++dem;
   ++x;
   ++b[y];
  }
  else{
   ++dem;
   ++x;
   ++y;
  }
 }
 int max = b[0];
 for(int i = 0; i < dem; i++){
  if(b[i] > max) max = b[i];
 }
 printf("%d", n-max-1);
}