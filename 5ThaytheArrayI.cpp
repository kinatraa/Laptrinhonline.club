#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int a[10];
 for(int i = 0; i < 10; i++){
  scanf("%d", &a[i]);
  if(a[i] <= 0) a[i]=1;
 }
 for(int i = 0; i < 10; i++){
  printf("X[%d] = %d\n", i, a[i]);
 }
}