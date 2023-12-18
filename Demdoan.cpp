#include <stdio.h>
#include <math.h>

int main(){
 float a, b, k;
 long long n, r, dem = 0;
 scanf("%lld%lld", &n, &r);
 scanf("%f%f", &a, &b);
 float m[n][2];
 for(int i = 0; i < n; i++){
  for(int j = 0; j < 2; j++){
   scanf("%f", &m[i][j]);
  }
 }
 for(int i = 0; i < n; i++){
  k = sqrt(pow((m[i][0] - a), 2) + pow((m[i][1] - b), 2));
  if(k <= r) dem++;
 }
 printf("%lld", dem*(dem - 1)/2);
}