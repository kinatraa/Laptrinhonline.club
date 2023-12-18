#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, d = 1, dem = 0;
 scanf("%d", &n);
 for(int i = 0; i < n; i++){
  for(int j = d; ; j++){
   ++dem;
   printf("%d ", j);
   if(dem == 3) break;
  }
  printf("Nam\n");
  d += 4;
  dem = 0;
 }
}