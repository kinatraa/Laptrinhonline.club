#include <stdio.h>
#include <math.h>
#include <string.h>

void sx(int b[]){
 int temp;
 for(int i = 0; i < 3; i++){
  for(int j = i+1; j < 4; j++){
   if(b[i] <= b[j]){
    temp = b[i];
    b[i] = b[j];
    b[j] = temp;
   }
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
 int b[4], temp;
 for(int i = 0; i < 2; i++){
  for(int j = i+1; j < 3; j++){
   if(a[i] <= a[j]){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
 }
 for(int i = 0; i < 3; i++){
  b[i] = a[i];
  printf("%d ", b[i]);
 }
 printf("\n");
 for(int i = 3; i < n; i++){
  b[3] = a[i];
  sx(b);
  for(int i = 0; i < 3; i++){
   printf("%d ", b[i]);
  }
  printf("\n");
 }
}