#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 char a[1000];
 gets(a);
 if(strlen(a) <= 30) printf("CO");
 else printf("KHONG");
}