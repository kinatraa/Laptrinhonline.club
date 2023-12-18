#include <stdio.h>
#include <math.h>

int main(){
 long long n;
 scanf("%lld", &n);
 long long a[n], b[n];
 for(int i = 0 ; i < n; i++){
  scanf("%lld", &a[i]);
 }
 for(int i = 0 ; i < n; i++){
  scanf("%lld", &b[i]);
 }
 for(int i = 0 ; i < n; i++){
  printf("%lld\n", a[i] + b[i]);
 }
}