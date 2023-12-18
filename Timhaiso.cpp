#include <stdio.h>

int main(){
 int s, m;
 scanf("%d%d", &s, &m);
 float a = (s+m)/2.0, b = (s-m)/2.0;
 if(a == (int)a && b == (int)b) printf("%d %d", (int)a, (int)b);
 else printf("-1");
}