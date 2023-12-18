#include <stdio.h>

int main(){
 int n, c, d, cnt = 0;
 scanf("%d", &n);
 scanf("%d%d", &c, &d);
 int a[n];
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  if(a[i] >= (-1*c) && a[i] <= d) ++cnt;
 }
 printf("%d\n", cnt);
 cnt = 0;
 for(int i = 0; i < (n-1); i++){
  if(a[i] < a[i+1]) ++cnt;
 }
 if(cnt == (n-1)) printf("YES");
 else printf("NO");
}