#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 float a[12][12];
 char n;
 scanf("%c", &n);
 for(int i = 0; i < 12; i++){
  for(int j = 0; j < 12; j++){
   scanf("%f", &a[i][j]);
  }
 }
 int h = 5, k = 6;
 float s = 0;
 for(int i = 7; i < 12; i++){
  for(int j = h; j <= k; j++){
   s += a[i][j];
  }
  --h;
  ++k;
 }
 if(n == 'S') printf("%.1f", s);
 else if(n == 'M') printf("%.1f", s/30);
}