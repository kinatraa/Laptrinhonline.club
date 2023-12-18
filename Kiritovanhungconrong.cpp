#include <stdio.h>

void sx(int a[],int b[], int n){
 int x, y;
 for(int i = 0; i < n-1; i++){
  for(int j = i+1; j < n; j++){
   if(a[i] > a[j]){
    x = a[i];
    a[i] = a[j];
    a[j] = x;
    y = b[i];
    b[i] = b[j];
    b[j] = y;
   }
  }
 }
}

int main(){
 int s, n, dem = 0;
 scanf("%d%d", &s, &n);
 int a[n], b[n];
 for(int i = 0; i < n; i++){
  scanf("%d%d", &a[i], &b[i]);
 }
 sx(a,b,n);
 for(int i = 0; i < n; i++){
  if(a[i] < s){
   s += b[i];
  }
  else{
   ++dem;
   break;
  }
 }
 if(dem == 0) printf("YES");
 else printf("NO");
}