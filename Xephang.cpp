#include <stdio.h>

int main(){
 int n, max1 = -1, max2 = -1, max3 = -1;
 scanf("%d", &n);
 int a[n], st = 0, nd = 0, rd = 0;
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < n; i++){
  if(max1 < a[i]) max1 = a[i];
 }
 for(int i = 0; i < n; i++){
  if(max2 < a[i] && a[i] < max1) max2 = a[i];
 }
 for(int i = 0; i < n; i++){
  if(max3 < a[i] && a[i] < max2) max3 = a[i];
 }
 for(int i = 0; i < n; i++){
  if(a[i] == max1) ++st;
  else if(a[i] == max2) ++nd;
  else if(a[i] == max3) ++rd;
 }
 printf("1st: %d\n2nd: %d\n3rd: %d", st, nd, rd);
}