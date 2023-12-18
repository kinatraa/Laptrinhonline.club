#include<stdio.h>

int x[20];

void in(int n){
 for(int i = 1; i <= n ; i++){
  printf("%d", x[i]);
 }
 printf("\n");
}

void kt(int i, int n){
 for(int j = 0; j <= 1; j++){
  x[i] = j;
  if(i == n){
   in(n);
  }
  else{
   kt(i+1, n);
  }
 }
}

int main(){
 int n;
 scanf("%d", &n);
 kt(1, n);
}