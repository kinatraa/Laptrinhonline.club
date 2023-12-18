#include <stdio.h>
#include <math.h>

int main(){
 double n1, n2, n3, n4, tb;
 scanf("%lf%lf%lf%lf", &n1, &n2,&n3,&n4);
 tb = (n1*2 + n2*3 + n3*4 + n4) / 10;
 tb = round(tb*10)/10;
 printf("Media: %.1lf\n", tb);
 if(tb >= 7){
  printf("Aluno aprovado.");
 }
 else if(tb < 5.0){
  printf("Aluno reprovado.");
 }
 else{
  double n5, tb2;
  scanf("%lf", &n5);
  printf("Aluno em exame.\n");
  printf("Nota do exame: %.1lf\n", n5);
  tb2 = (tb + n5) / 2;
  tb2 = round(tb2*10)/10;
  if(tb2 >= 5) printf("Aluno aprovado.\n");
  else printf("Aluno reprovado.\n");
  printf("Media final: %.1lf", tb2);
 }
}