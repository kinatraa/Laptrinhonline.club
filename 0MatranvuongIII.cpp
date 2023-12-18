#include <stdio.h>
#include <math.h>

int a[100000], b[100000];

int main(){
 int x = 0, y;
 while(1){
  scanf("%d", &a[x]);
  if(a[x] == 0) break;
  x++;
 }
 for(int k = 0; k < x; k++){
  for(int i = 0; i < a[k]; i++){
   b[i] = pow(2, i);
  }
  for(int i = 0; i < a[k]; i++){
   printf("%d ", b[i]);
  }
  printf("\n");
  for(int i = 1; i < a[k]; i++){
   y = pow(2, i);
   for(int j = 0; j < a[k]; j++){
    printf("%d ", y*b[j]);
   }
   printf("\n");
  }
  printf("\n");
 }
}