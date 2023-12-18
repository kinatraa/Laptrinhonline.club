#include <stdio.h>
#include <math.h>

int main(){
 long long n, x, c, d;
 scanf("%lld%lld", &n, &x);
 long long a[n];
 for(int i = 0; i < n; i++){
  scanf("%lld", &a[i]);
 }
 for(int i = 0; i < n-1; i++){
  for(int j = i+1; j < n; j++){
   if(a[i] + a[j] == x){
    c = a[i];
    d = a[j];
    break;
   } 
  }
 }
 if(c > d) printf("%lld %lld", d, c);
 else printf("%lld %lld", c, d);
}