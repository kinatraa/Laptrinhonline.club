#include <stdio.h>
#include <math.h>

int main(){
 int n, r, x, y, cnt = 0;
 scanf("%d", &r);
 scanf("%d", &n);
 int a[n][2];
 float d, max = 0;
 for(int i = 0; i < n; i++){
  for(int j = 0 ; j < 2; j++){
   scanf("%d", &a[i][j]);
  }
 }
 for(int i = 0; i < n; i++){
  d = sqrt(pow(a[i][0], 2) + pow(a[i][1], 2));
  if(d <= r){
   if(d > max){
    max = d;
    x = a[i][0];
    y = a[i][1];
   }
  }
  else ++cnt;
 }
 if(cnt == n) printf("0");
 else printf("%d %d", x, y);
}