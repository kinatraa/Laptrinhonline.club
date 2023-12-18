#include <stdio.h>

int main(){
 int a;
 scanf("%d", &a);
 int b[a][2];
 for(int i = 0; i < a; i++){
  for(int j = 0; j < 2; j++){
   scanf("%d", &b[i][j]);
  }
 }
 for(int i = 0; i < a; i++){
  printf("%d\n", b[i][0]+b[i][1]);
 }
}