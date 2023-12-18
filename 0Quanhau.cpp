#include<stdio.h>

int x[20], cot[20], cheo1[20], cheo2[20], dem = 0;

void kt(int i, int n){
 for(int j = 1; j <= n; j++){
  if(cot[j] == 1 && cheo1[i-j+n] == 1 && cheo2[i+j-1] == 1){
   cot[j] = cheo1[i-j+n] = cheo2[i+j-1] = 0;
   if(i == n){
    ++dem;
   }
   else{
    kt(i+1, n);
   }
   cot[j] = cheo1[i-j+n] = cheo2[i+j-1] = 1;
  }
 }
}

int main(){
 int n;
 scanf("%d", &n);
 for(int i = 0; i < 20; i++){
  cot[i] = 1;
  cheo1[i] = 1;
  cheo2[i] = 1;
 }
 kt(1, n);
 printf("%d", dem);
}