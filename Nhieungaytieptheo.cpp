#include <stdio.h>

int kt(int nam){
 if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) return 0;
 else return 1;
}

int main(){
 int ngay, thang, nam;
 int n;
 scanf("%d/%d/%d", &ngay, &thang, &nam);
 scanf("%d", &n);
 for(int i = 0; i < n; i++){
   if(kt(nam) == 0){
   switch(thang){
    case 2:
     if(ngay == 29){
      thang++;
      ngay = 1; 
     }
     else ngay++;
     break;
    case 1: case 3: case 5: case 7: case 8: case 10:
     if(ngay == 31){
      thang++;
      ngay = 1;
     }
     else ngay++;
     break;
    case 4: case 6: case 9: case 11:
     if(ngay == 30){
      thang++;
      ngay =  1;
     }
     else ngay++;
     break;
    case 12:
     if(ngay == 31){
      thang = 1;
      ngay = 1;
      nam++;
     }
     else ngay++;
     break;
   }
  }
  else if(kt(nam) == 1){
   switch(thang){
    case 2:
     if(ngay == 28){
      thang++;
      ngay = 1; 
     }
     else ngay++;
     break;
    case 1: case 3: case 5: case 7: case 8: case 10:
     if(ngay == 31){
      thang++;
      ngay = 1;
     }
     else ngay++;
     break;
    case 4: case 6: case 9: case 11:
     if(ngay == 30){
      thang++;
      ngay = 1;
     }
     else ngay++;
     break;
    case 12:
     if(ngay == 31){
      thang = 1;
      ngay = 1;
      nam++;
     }
     else ngay++;
     break;
   }
  }
  printf("%d/%d/%d\n", ngay, thang, nam);
 }
}