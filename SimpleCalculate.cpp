#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 float a[2][3];
 for(int i = 0; i < 2; i++){
  for(int j = 0; j < 3; j++){
   scanf("%f", &a[i][j]);
  }
 }
 float tong = 0;
 for(int i = 0; i < 2; i++){
  tong += (a[i][1] * a[i][2]);
 }
 printf("VALOR A PAGAR: R$ %.2f", tong);
}