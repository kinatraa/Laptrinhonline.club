#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d", &n);
 if(n == 1) printf("0");
 else if(n == 2) printf("0 1");
 else{
  printf("0 1 ");
  int a = 0, b = 1, c;
  for(int i = 2; i < n; i++){
   c = a + b;
   printf("%d ", c);
   a = b;
   b = c;
  }
 }
}