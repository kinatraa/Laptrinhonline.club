#include <stdio.h>
#include <math.h>

int main(){
 int n, cnt = 0;
 scanf("%d", &n);
 for(int i = 2; i <= sqrt(n); i++){
  if(n % i == 0){
   cnt = 0;
   while(n%i==0){
    n/=i;
    ++cnt;
   }
   printf("%d %d\n", i, cnt);
  }
 }
 if(n != 1) printf("%d 1", n);
}