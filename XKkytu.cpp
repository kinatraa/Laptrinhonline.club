#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d", &n);
 int a[n], c[n];
 char b[n][10000];
 for(int i = 0; i < n; i++){
  fflush(stdin);
  scanf("%d ", &a[i]);
  gets(b[i]);
  c[i] = strlen(b[i]);
 }
 for(int i = 0; i < n; i++){
  for(int j = 0; j < c[i]; j++){
   for(int k = 0; k < a[i]; k++){
    printf("%c",b[i][j]);
   }
  }
  printf("\n");
 }
}