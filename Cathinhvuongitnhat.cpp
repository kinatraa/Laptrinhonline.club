#include <bits/stdc++.h>
using namespace std;

// int F(int a, int b){
//  if(a == b) return 1;
//  else if(a > b) return F(b,a);
//  else if(b%a == 0) return b/a;
//  int min = b;
//  for(int i = 1; i <= a/2; i++){
//   int kq = F(i,b) + F(a-i,b);
//   if(kq < min) min = kq;
//  }
//  for(int j = 1; j <= b/2; j++){
//   int kq = F(a,j) + F(a,b-j);
//   if(kq < min) min = kq;
//  }
//  return min;
// }

int main(){
 int a, b, ax, bx;
 cin >> ax >> bx;
 a = min(ax,bx);
 b = max(ax,bx);
 int f[b+1][b+1];
 for(int i = 0; i <= a; i++){
  for(int j = i; j <= b; j++){
   if(i == j) f[i][j] = f[j][i] = 1;
   else{
    int min = j;
    for(int h = 1; h <= i/2; h++){
     int kq = f[h][j] + f[i-h][j];
     if(kq < min) min = kq;
    }
    for(int k = 1; k <= j/2; k++){
     int kq = f[i][k] + f[i][j-k];
     if(kq < min) min = kq;
    }
    f[i][j] = f[j][i] = min;
   }
  }
 }
 cout << f[a][b];
}