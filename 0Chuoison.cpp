#include <stdio.h>

int main(){
 int a[10000], dem = 0;
 while(1){
  scanf("%d", &a[dem]);
  if(a[dem] != 0){
   ++dem;
  }
  else break;
 }
 for(int i = 0; i < dem; i++){
  for(int j = 1; j <= a[i]; j++){
   if(j != a[i]) printf("%d ", j);
   else printf("%d", j);
  }
  printf("\n");
 }
}