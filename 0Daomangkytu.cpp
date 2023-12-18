#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d\n", &n);
 char a[n];
 fflush(stdin);
 gets(a);
 for(int i = n-1; i >= 0; i--){
  printf("%c", a[i]);
 }
}