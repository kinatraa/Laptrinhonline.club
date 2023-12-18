#include <stdio.h>

int main(){
 int n, dai1, dai2, m, dem = 0;
 scanf("%d%d%d", &dai1, &dai2, &n);
 if(dai1 < dai2){
  m = dai1;
  dai1 = dai2;
  dai2 = m;
 }
 if(n % dai1 == 0){
  printf("%d", n/dai1);
 }
 else{
  for(int i = 0; ; i++){
   n -= dai2;
   ++dem;
   if(n % dai1 == 0){
    printf("%d", n/dai1 + dem);
    break; 
   }
   if(n < 0){
    printf("-1");
    break;
   }
  }
 }
}