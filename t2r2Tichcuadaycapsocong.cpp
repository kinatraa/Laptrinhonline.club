#include<stdio.h>
int main(){
 int n,k,i;
 long long s=1;
 scanf("%d%d",&n,&k);
 int t=n%k;
 for( i=t;i<=n;i+=k) s*=i;
 printf("%lld",s);
}