#include<stdio.h>
#include <math.h>

int main(){
 int n, dem = 0;
 double s1 = 0, s2 = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < n; i++){
  if((a[i] + s1) < 0){
   printf("Khong tinh duoc S1\n");
   ++dem;
   break;
  }
  s1 = sqrt(a[i] + s1);
 }
 if(dem == 0) printf("%.3lf\n", s1);
 dem = 0;
 for(int i = (n-1); i >= 0; i--){
  if((a[i] + s2) < 0){
   printf("Khong tinh duoc S2");
   ++dem;
   break;
  }
  s2 = sqrt(a[i] + s2);
 }
 if(dem == 0) printf("%.3lf", s2);
}