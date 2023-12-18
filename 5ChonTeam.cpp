#include <stdio.h>
#include <string.h>

int main(){
 long long n, b[5], cnt = 0, doi;
 scanf("%d", &n);
 char ten[n][100];
 for(int i = 0; i < n; i++){
  scanf("%s", &ten[i]);
 }
 for(int i = 0; i < 5; i++){
  b[i] = 0;
 }
 for(int i = 0; i < n; i++){
  switch(ten[i][0]){
   case 'M':
    ++b[0];
    break;
   case 'A':
    ++b[1];
    break;
   case 'R':
    ++b[2];
    break;
   case 'C':
    ++b[3];
    break;
   case 'H':
    ++b[4];
    break;
  }
 }
 for(int i = 0; i < 5; i++){
  if(b[i] == 0) ++cnt;
 }
 if(cnt > 2) printf("0");
 else if(cnt <= 2){
  doi = b[0]*b[1]*b[2] + b[0]*b[1]*b[3] + b[0]*b[1]*b[4] + b[0]*b[2]*b[3] + b[0]*b[2]*b[4] + b[0]*b[3]*b[4] + b[1]*b[2]*b[3] + b[1]*b[2]*b[4] + b[1]*b[3]*b[4] + b[4]*b[2]*b[3];
  printf("%lld", doi);
 }
}