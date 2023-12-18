#include <stdio.h>

int main(){
 int n, cnt = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < n-1; i++){
  if(i == n-2) break;
  if(a[i] == 1 && a[i+1] == 1){
   ++cnt;
   i+=2;
  }
 }
 printf("%d", cnt);
}