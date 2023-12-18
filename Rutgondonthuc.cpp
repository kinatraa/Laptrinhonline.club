#include <iostream>
#include <string.h>
using namespace std;

char a[10000000];
int b[123] = {0};

void kt(char a[], int l){
 for(int i = 0; i < l; i++){
  ++b[a[i]];
 }
}

void in(){
 for(int i = 97; i <= 122; i++){
  if(b[i] != 0){
   printf("(%c^%d)", i, b[i]);
  }
 }
}

int main(){
 cin >> a;
 int l = strlen(a);
 kt(a, l);
 in();
}