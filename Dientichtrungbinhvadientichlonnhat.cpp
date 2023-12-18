#include <stdio.h>
int main(){ int x; scanf("%d",&x); double a[x],b[x],max=0,c=0; for (int i=0;i<x;i++){ scanf("%lf%lf",&a[i],&b[i]);
c+=a[i]*b[i];

if(max<a[i]*b[i])max=a[i]*b[i];
}
printf("%.3lf\n%.3lf",c/x,max);
}