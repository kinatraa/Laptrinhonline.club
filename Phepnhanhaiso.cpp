#include <stdio.h>

int main(){
 long long n, x, luu, y;
 scanf("%lld", &n);
 long long a[n][2];
 double k, l;
 for(int i = 0 ; i < n; i++){
  for(int j = 0;  j< 2; j++){
   scanf("%lld", &a[i][j]);
  }
 }
 for(int i = 0;i < n; i++){
  for(int j = 10;j < a[i][0] ;j*=10){
   y = a[i][0] % j;
   x = a[i][0] / j;
   if(y != 0){
    if(a[i][1] % y == 0 && a[i][1] % x == 0){
     luu = j;
     break;
    }
   }
  }
  k = a[i][0]/luu;
  l = a[i][0]%luu;
  printf("%.lf %.lf\n", k, l);
 }
}