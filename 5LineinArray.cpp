#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 char m;
 scanf("%d\n%c", &n, &m);
 float a[12][12];
 for(int i = 0; i < 12; i++){
  for(int j = 0; j < 12; j++){
   scanf("%f", &a[i][j]);
  }
 }
 float s = 0;
 for(int j = 0; j < 12; j++){
  s += a[n][j];
 }
 if(m == 'S') printf("%.1f", s);
 else if(m == 'M') printf("%.1f", s/12);
}