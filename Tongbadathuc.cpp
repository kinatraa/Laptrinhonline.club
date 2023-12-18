#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, m, k;
 scanf("%d", &n);
 float a[n+1];
 for(int i = 0; i < n+1; i++){
  scanf("%f", &a[i]);
 }
 scanf("%d", &m);
 float b[m+1];
 for(int i = 0; i < m+1; i++){
  scanf("%f", &b[i]);
 }
 scanf("%d", &k);
 float c[k+1];
 for(int i = 0; i < k+1; i++){
  scanf("%f", &c[i]);
 }
 int max, dem = 0;
 max = (n >= m) ? n : m;
 max = (max >= k) ? max : k;
 float d[max+1];
 for(int i = 0; i < max+1; i++){
  d[i] = 0;
 }
 for(int i = 0; i < n+1; i++){
  d[i] += a[i];
 }
 for(int i = 0; i < m+1; i++){
  d[i] += b[i];
 }
 for(int i = 0; i < k+1; i++){
  d[i] += c[i];
 }
 for(int i = max; i >= 0; i--){
  if(d[i] != 0){
   ++dem;
   break;
  }
  else --max;
 }
 if(dem == 0) printf("0.00");
 else{
  for(int i = 0; i < max+1; i++){
   printf("%.2f ", d[i]);
  } 
 }
}