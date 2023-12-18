#include <stdio.h>
#include <math.h>

int main(){
 int n, tb = 0, dem = 0;
 scanf("%d", &n);
 int a[n];
 if(n == 0){
  printf("0 0");
 }
 else{
  for(int i = 0; i < n; i++){
   scanf("%d", &a[i]);
   tb += a[i];
  }
  tb /= n;
  for(int i = 0; i < n; i++){
   if(a[i] < tb) dem++;
  }
  printf("%d %d", tb, dem);
 }
}