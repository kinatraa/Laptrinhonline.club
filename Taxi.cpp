#include <stdio.h>
#include <math.h>

int main(){
 int n, dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, s = 0;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  if(a[i] == 1) ++dem1;
  else if(a[i] == 2) ++dem2;
  else if(a[i] == 3) ++dem3;
  else if(a[i] == 4) ++dem4;
 }
 s += dem4;
 if(dem1 == dem3){
  s += dem3;
  if(dem2 % 2 == 0) s += dem2/2;
  else s += (dem2/2 + 1);
 }
 else if(dem1 > dem3){
  s += dem3;
  dem1 -= dem3;
  if(dem2 == 0){
   if(dem1 % 4 == 0){
    s += dem1 / 4;
   }
   else s += (dem1/4 + 1);
  }
  else{
   if(dem1 % 2 == 0){
    if(dem1/2 == dem2) s += dem2;
    else if(dem1/2 > dem2){
     s += dem2;
     dem1 -= dem2*2;
     if(dem1 % 4 == 0){
      s += dem1 / 4;
     }
     else s += (dem1/4 + 1);
    }
    else if(dem1/2 < dem2){
     s += dem1/2;
     dem2 -= dem1/2;
     s += round(dem2/2.0);
    }
   }
   else{
    dem1 -= 1;
    if(dem1/2 == dem2) s += (dem2 + 1);
    else if(dem1/2 > dem2){
     s += dem2;
     dem1 -= dem2*2;
     dem1 += 1;
     if(dem1 % 4 == 0){
      s += dem1/4 ;
     }
     else s += (dem1/4 + 1);
    }
    else if(dem1/2 < dem2){
     s += (dem1/2 + 1);
     dem2 -= (dem1/2 + 1);
     s += round(dem2/2.0);
    }
   }
  }
 }
 else if(dem1 < dem3){
  s += dem1;
  dem3 -= dem1;
  s += dem3;
  s += round(dem2/2.0);
 }
 printf("%d", s);
}