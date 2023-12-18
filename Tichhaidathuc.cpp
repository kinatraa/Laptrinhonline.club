#include <stdio.h>

int main(){
 int n, m, temp;
 scanf("%d", &n);
 float a[n+1];
 for(int i = 0; i <= n; i++){
  scanf("%f", &a[i]);
 }
 scanf("%d", &m);
 float b[m+1], c[(m+1)*(n+1)];
 for(int i = 0; i <= m; i++){
  scanf("%f", &b[i]);
 }
 for(int i = 0; i < (m+1)*(n+1); i++){
  c[i] = 0;
 }
 for(int i = 0; i <= n; i++){
  for(int j = 0; j <= m; j++){
   c[i+j] += (a[i]*b[j]);
  }
 }
 for(int i = 0; i < (m+1)*(n+1); i++){
  if(c[i] != 0) temp = i;
 }
 printf("%d\n", temp);
 for(int i = 0; i <= temp; i++){
  printf("%.2f ", c[i]);
 }
}