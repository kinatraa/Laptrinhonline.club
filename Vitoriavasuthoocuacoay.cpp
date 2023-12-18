#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d", &n);
 char a[n][10000];
 for(int i = 0; i < n; i++){
  fflush(stdin);
  gets(a[i]);
 }
 printf("Khoa hoc may tinh");
}