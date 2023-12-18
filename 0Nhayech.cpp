#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, p;
 scanf("%d%d", &p, &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 int dem = 0;
 for(int i = 0; i < n-1; i++){
  if(abs(a[i+1]-a[i]) > p){
   ++dem;
   printf("GAME OVER");
   break;
  }
 }
 if(dem == 0) printf("YOU WIN");
}