#include <stdio.h>

int main(){
 int a;
 scanf("%d", &a);
 if(a >= 1 && a <= 12){
  switch(a){
   case 1:
    printf("Thang Mot");
    break;
   case 2:
    printf("Thang Hai");
    break;
   case 3:
    printf("Thang Ba");
    break;
   case 4:
    printf("Thang Tu");
    break;
   case 5:
    printf("Thang Nam");
    break;
   case 6:
    printf("Thang Sau");
    break;
   case 7:
    printf("Thang Bay");
    break;
   case 8:
    printf("Thang Tam");
    break;
   case 9:
    printf("Thang Chin");
    break;
   case 10:
    printf("Thang Muoi");
    break;
   case 11:
    printf("Thang Muoi mot");
    break;
   case 12:
    printf("Thang Muoi hai");
    break;
  }
 }
 else printf("Khong co");
}