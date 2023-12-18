#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 char a[100];
 scanf("%s", &a);
 int len = strlen(a), b[123];
 for(int i = 97; i < 123; i++){
  b[i] = 0;
 }
 for(int i = 0; i < len; i++){
  ++b[a[i]];
 }
 int dem = 0;
 for(int i = 97; i < 123; i++){
  if(b[i] % 2 != 0){
   ++dem;
   break;
  }
 }
 if(dem == 0) printf("Yes");
 else printf("No");
}