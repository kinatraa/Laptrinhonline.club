#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 char a[100];
 gets(a);
 for(int i = 0; i < 19; i++){
  if(i == 5 || i == 13) printf(" ");
  else printf("%c", a[i]);
 }
}