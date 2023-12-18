#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n;
 scanf("%d", &n);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 int dem = 0;
 if(a[0] > a[1]){
  for(int i = 0; i < n-1; i+=2){
   if(a[i] <= a[i+1]){
    ++dem;
    break;
   }
  }
  if(dem == 0){
   for(int i = 1; i < n-1 ; i+=2){
    if(a[i] >= a[i+1]){
     ++dem;
     break;
    }
   }
   if(dem == 0) printf("1");
   else printf("0");
  }
  else printf("0");
 }
 else if(a[0] < a[1]){
  for(int i = 0; i < n-1; i+=2){
   if(a[i] >= a[i+1]){
    ++dem;
    break;
   }
  }
  if(dem == 0){
   for(int i = 1; i < n-1 ; i+=2){
    if(a[i] <= a[i+1]){
     ++dem;
     break;
    }
   }
   if(dem == 0) printf("1");
   else printf("0");
  }
  else printf("0");
 }
 else printf("0");
}