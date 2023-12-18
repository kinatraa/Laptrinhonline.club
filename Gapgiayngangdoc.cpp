#include <stdio.h>
#include <math.h>

int main(){
 long long k, cnt = 0, d = -1;
 scanf("%lld", &k);
 if(k == 0 || k == 1) printf("0");
 else{
  for(int i = 1; d <= k ;i++){
   d = pow(2, i);
   if(d == k){
    ++cnt;
    break;
   }
  }
  if(cnt == 0) printf("0");
  else printf("%lld", k);
 }
}