#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, trong = 0, ngoai = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  if(a[i] >= 10 && a[i] <= 20) ++trong;
  else ++ngoai;
 }
 printf("%d trong\n%d ngoai", trong, ngoai);
}