#include <stdio.h>

int main(){
 int n;
 scanf("%d", &n);
 int a[n], cnt[100], max = -1;
 for(int i = 0; i < n; i++){
  scanf("%d", &a[i]);
 }
 for(int i = 0; i < 100; i++){
  cnt[i] = 0;
 }
 for(int i = 0; i < 100; i++){
  for(int j = i; j < n; j++){
   if(a[j] != 0) break;
   else if(a[j] == 0) ++cnt[i];
  }
 }
 for(int i = 0; i < 100; i++){
  if(cnt[i] > max) max = cnt[i];
 }
 printf("%d", max);
}