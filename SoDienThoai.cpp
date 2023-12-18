#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 char a[20];
 gets(a);
 if(strlen(a) == 10){
  if(a[0] == '0'){
   if(a[9] != '0' && a[9] != '4' && a[9] != '7') printf("YES");
   else printf("NO");
  }
  else printf("NO");
 }
 else printf("NO");
}