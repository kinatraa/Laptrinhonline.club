#include <stdio.h>
#include <math.h>

int main(){
 int n;
 scanf("%d", &n);
 int a[n], dem1 = 0, dem2 = 0;
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
  if(a[i] == 25) dem1 += 25;
  else dem2 += (a[i] - 25);
 }
 if(dem1 >= dem2) printf("YES");
 else printf("NO");
}