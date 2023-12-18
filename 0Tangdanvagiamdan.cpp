#include <stdio.h>

int main(){
 int a[10000][2], dem = 0;
 while(1){
  scanf("%d%d", &a[dem][0], &a[dem][1]);
  if(a[dem][0] == a[dem][1]) break;
  else{
   ++dem;
  }
 }
 for(int i = 0; i < dem; i++){
  if(a[i][0] > a[i][1]) printf("Decrescente\n");
  else printf("Crescente\n");
 }
}