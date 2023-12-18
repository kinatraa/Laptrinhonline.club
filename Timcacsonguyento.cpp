#include <stdio.h>
#include <math.h>
#include <string.h>

int snt(int a){
 for(int i = 2; i <= sqrt(a); i++){
  if(a % i == 0) return 0;
 }
 return 1;
}

int main(){
 int n;
 scanf("%d", &n);
 printf("2\n");
 for(int i = 3; i <= n; i++){
  if(snt(i) == 1) printf("%d\n", i);
 }
}