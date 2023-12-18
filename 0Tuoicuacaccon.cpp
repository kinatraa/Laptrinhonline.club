#include <stdio.h>
#include <math.h>

int hieu(int a, int b){
 int s = b - a;
 return s;
}

int main(){
 int a, b;
 scanf("%d%d", &a, &b);
 b += hieu(a,b);
 printf("%d", b);
}