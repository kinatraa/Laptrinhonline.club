#include <stdio.h>

int main(){
 int n, s = 0;
 scanf("%d", &n);
 int a[n];
 float d, max;
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 max = a[0]*1.0/n;
 for(int i = 1; i < n; i++){
  d = (a[i]*1.00)/(n-i);
  if(d > max) max = d;
 }
 for(int i = 0; i < n; i++){
  s += a[i];
 }
 for(int i = 1; i < (n-1); i++){
  s += a[i];
 }
 printf("%.2f\n%d", max, s);
}