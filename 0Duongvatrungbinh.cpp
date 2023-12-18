#include <stdio.h>

int main(){
 double a[6], tb = 0;
 int count = 0;
 for(int i = 0; i < 6; i++){
  scanf("%lf", &a[i]);
 }
 for(int i = 0; i < 6; i++){
  if(a[i] > 0){
   count++;
   tb += a[i];
  }
 }
 printf("%d Gia tri duong\n", count);
 if(count == 0) printf("0.0");
 else printf("%.1lf", tb/count);
 
}