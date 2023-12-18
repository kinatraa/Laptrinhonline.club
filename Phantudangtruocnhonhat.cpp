#include <stdio.h>

int main(){
 int n;
 scanf("%d", &n);
 int x[n+1];
 for(int i = 1; i <= n; i++){
  scanf("%d", &x[i]);
 }
 int a = x[1], b = 1, c = 1;
 printf("%d %d %d\n", a, b, c);
 for(int i = 2; i <= n; i++){
  if(x[i] > a){
   printf("%d %d %d\n", a, b, c);
  }
  else if(x[i] == a){
   ++b;
   printf("%d %d %d\n", a, b, c);
  }
  else{
   a = x[i];
   b = 1;
   c = i;
   printf("%d %d %d\n", a, b, c);
  }
 }
}