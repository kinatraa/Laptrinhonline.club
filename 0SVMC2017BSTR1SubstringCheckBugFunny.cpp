#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int dem = 0;
 char a[10], b[5], c[10], d[5];
 scanf("%s%s", &a, &b);
 scanf("%s%s", &c, &d);
 for(int i = 0; i < 6; i++){
  if(a[i] == b[0] && a[i+1] == b[1] && a[i+2] == b[2] && a[i+3] == b[3] & a[i+4] == b[4]){
   ++dem;
   break;
  }
 }
 printf("%d\n", dem);
 dem = 0;
 for(int i = 0; i < 6; i++){
  if(c[i] == d[0] && c[i+1] == d[1] && c[i+2] == d[2] && c[i+3] == d[3] & c[i+4] == d[4]){
   ++dem;
   break;
  }
 }
 printf("%d", dem);
}