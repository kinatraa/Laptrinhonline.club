#include <stdio.h>
#include <string.h>

int main(){
 int a, b;
 scanf("%d%d", &a, &b);
 if(b > a) printf("Tran dau keo dai %d gio", b-a);
 else printf("Tran dau keo dai %d gio", b+24-a);
}