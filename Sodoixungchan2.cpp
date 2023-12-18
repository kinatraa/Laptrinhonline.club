#include <stdio.h>

int main(){
 int n, dem = 0;
 scanf("%d", &n);
 int a[100];
 printf("%d", n);
 for(int i = 0; n >= 1 ; i++){
  if(n % 10 == 0) a[i] = 0;
  else a[i] = n % 10;
  ++dem;
  n /= 10;
 }
 for(int i = 0; i < dem; i++){
  printf("%d", a[i]);
 }
}