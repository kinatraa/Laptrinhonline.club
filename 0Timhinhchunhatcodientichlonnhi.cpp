#include <stdio.h>

int main(){
 int n, max = 0, max2 = 0, cnt1 = 0, cnt2 = 0, x, y;
 scanf("%d", &n);
 int a[n][2];
 
 for(int i = 0; i < n; i++){
  for(int j = 0; j < 2; j++){
   scanf("%d", &a[i][j]);
  }
 }
 if(n == 1) printf("NO");
 else{
  for(int i = 0; i < n; i++){
   if(a[i][0]*a[i][1] > max) max = a[i][0]*a[i][1];
   else if(a[i][0]*a[i][1] == max) ++cnt1;
  }
  if(cnt1 != 0 && (cnt1+1) == n){
   printf("NO"); 
  }
  else{
   for(int i = 0; i < n; i++){
    if(a[i][0]*a[i][1] < max){
     if(a[i][0]*a[i][1] > max2){
      max2 = a[i][0]*a[i][1];
      x = a[i][0];
      y = a[i][1];
     }
    }
    else if(a[i][0]*a[i][1] == max2) ++cnt2;
   }
   if(cnt2) printf("NO");
   else printf("%d %d", x, y);
  }
 }
}