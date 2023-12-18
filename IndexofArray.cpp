#include <stdio.h>
#include <math.h>

int main(){
 int n, k, dem = 0, d = 0;
 scanf("%d%d", &n, &k);
 int a[n+1], b[100000];
 for(int i = 1; i <= n; i++){
  scanf("%d", &a[i]);
  if(a[i] == k){
   if(i == n){
    b[d] = i-1; ++d;
   }
   else{
    b[d] = i-1; ++d;
    b[d] = i+1; ++d;
   } 
  }
 }
 int tg;
 if(d == 0) printf("-1");
 else{
  for(int i = 0; i < d-1; i++){
   for(int j = i+1; j < d; j++){
    if(b[i] > b[j]){
     tg = b[i];
     b[i] = b[j];
     b[j] = tg;
    } 
   }
  }
  if(b[0] > 0) printf("%d ", b[0]);
  for(int i = 1; i < d; i++){
   if(b[i] > 0 && b[i] != b[i-1]) printf("%d ", b[i]);
  }
 }
 
}