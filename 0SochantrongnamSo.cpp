#include <stdio.h>

int main(){
 int a[5], dem = 0;
 for(int i = 0; i < 5; i++){
  scanf("%d", &a[i]);
  if(a[i] % 2 == 0) ++dem;
 }
 printf("%d Gia tri", dem);
}