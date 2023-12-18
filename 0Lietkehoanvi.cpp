#include<stdio.h>

int x[10], used[10];

void in(int n){
 for(int i = 1; i <= n; i++){
  printf("%d", x[i]);
 }
 printf("\n");
}

void Try(int i, int n){
 for(int j = 1; j <= n; j++){
  if(used[j] != 1){
   x[i] = j;
   used[j] = 1;
   if(i == n) in(i);
   else Try(i+1, n);
   used[j] = 0;
  }
 }
}

int main(){
 int n;
 scanf("%d", &n);
 for(int i = 0; i < 10; i++){
  used[i] = 0;
 }
 Try(1,n);
}