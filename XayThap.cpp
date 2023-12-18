#include<stdio.h>
#include <math.h>

int main(){
 long long n, s = 0; 
 scanf("%lld", &n);
 for(int i = 1; i <= n; i++){
  s += (2*i-1);
 }
 printf("%lld", s);
}