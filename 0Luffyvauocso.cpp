#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define int long long

main(){
 int cnt[100005] = {0};
 for(int i = 1; i <= 100004; i+=2){
  for(int j = i; j <= 100004; j+=i){
   cnt[j] += i;
  }
 }
 int t, a, b;
 scanf("%lld", &t);
 while(t--){
  scanf("%lld%lld", &a, &b);
  int res = 0;
  for(int i = a; i <= b; i++){
   res += cnt[i];
  }
  printf("%lld\n", res);
 }
}