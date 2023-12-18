#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 long long a[10000], b[10000], dem = 0;
 for(int i = 0; ; i++){
  scanf("%d%d", &a[i], &b[i]);
  if(a[i] == 0 && b[i] == 0) break;
  b[i] *= a[i];
  ++dem;
 }
 for(int i = 0; i < dem; i++){
  printf("%lld\n", b[i]);
 }
}