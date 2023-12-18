#include <stdio.h>
#include <math.h>
#include <string.h>

int test(int x){
 for(int i = 2; i <= sqrt(x); i++){
  if(x % i == 0) return 0;
 }
 return 1;
}

int main(){
 int n, dem = 0;
 scanf("%d", &n);
 printf("2");
 for(int i = 3; dem <= n-2; i++){
  if(test(i) == 1){
   printf("%d", i);
   ++dem;
  }
 }
}