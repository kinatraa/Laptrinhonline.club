#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
 int *x = (int*)a;
 int *y = (int*)b;
 return *x > *y;
}

int main(){
 int n;
 scanf("%d", &n);
 int a[n];
 long long sum = 0;
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 qsort(a, n, sizeof(int), cmp);
 int tmp = a[n/2];
 for(int i = 0; i < n; i++){
  sum += abs(a[i]-tmp);
 }
 printf("%lld", sum);
}