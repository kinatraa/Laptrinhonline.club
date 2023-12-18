#include <stdio.h>

int buoc = 1;

void kt(int n, char a, char b, char c){
 if(n == 1){
  printf("Buoc%d Chuyen dia %d tu %c sang %c\n", buoc, n, a, b);
  buoc++;
  return;
 }
 kt(n-1, a, c, b);
 printf("Buoc%d Chuyen dia %d tu %c sang %c\n", buoc, n, a, b);
 buoc++;
 kt(n-1, c, b, a);
}

int main(){
 int n;
 scanf("%d", &n);
 char a = 'A', b = 'B', c = 'C';
 kt(n, a, b, c);
}