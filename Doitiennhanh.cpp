#include <stdio.h>

int dem = 0, a[9] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};

void kt(long long n){
 for(int i = 0; i < 9; i++){
  dem += (n/a[i]);
  n %= a[i];
 }
}

int main(){
 long long n;
 scanf("%lld", &n);
 if(n % 1000 == 0){
  kt(n);
  printf("%d", dem);
 }
 else printf("-1");
}