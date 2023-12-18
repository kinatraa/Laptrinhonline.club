#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 long long a[100], max = -1, luu;
 for(int i = 0; i < 100; i++){
  scanf("%lld", &a[i]);
  if(a[i] > max){
   max = a[i];
   luu = i+1;
  }
 }
 printf("%lld\n%lld", max, luu);
}