#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int m[10000], n[10000];
 int dem = 0, temp;
 for(int i = 0; ; i++){
  scanf("%d%d", &m[i], &n[i]);
  if(m[i] <= 0 || n[i] <= 0) break;
  ++dem;
  if(m[i] > n[i]){
   temp = m[i];
   m[i] = n[i];
   n[i] = temp;
  }
 }
 int s = 0;
 for(int i = 0; i < dem; i++){
  for(int j = m[i]; j <= n[i]; j++){
   printf("%d ", j);
   s += j;
  }
  printf("Tong=%d\n", s);
  s = 0;
 }
}