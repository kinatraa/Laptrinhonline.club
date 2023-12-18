#include <stdio.h>
#include <math.h>
#include <string.h>

long long test(long long a){
 long long s = 0;
 for(int i = 0; i < a; i++){
  s += pow(2,i);
 }
 return s;
}

int main(){
 int n;
 scanf("%d", &n);
 long long a[n], s[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  s[i] = test(a[i]);
 }
 for(int i = 0; i < n; i++){
  printf("%lld\n", s[i]);
 }
}