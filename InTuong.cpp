#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, d = 1;
 scanf("%d", &n);
 if(n == 1) printf("1");
 else{
  for(int i = 1; ;i++){
   d*=2;
   if(d >= n){
    printf("%d", i+1);
    break;
   }
  }
 }
 
}