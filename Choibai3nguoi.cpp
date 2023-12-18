#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
ll mod = 1000000007;

string A, B, C;
char tmp;

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> A >> B >> C;
 int alen = A.size()+1, blen = B.size()+1, clen = C.size()+1;
 tmp = A[0];
 A.erase(0,1);
 --alen;
 while(1){
  if(tmp == 'a'){
   if(A.size() > 0){
    tmp = A[0];
    A.erase(0,1);
   }
   --alen;
   if(alen == 0){
    cout << "A";
    break;
   }
  }
  else if(tmp == 'b'){
   if(B.size() > 0){
    tmp = B[0];
    B.erase(0,1);
   }
   --blen;
   if(blen == 0){
    cout << "B";
    break;
   }
  }
  else{
   if(C.size() > 0){
    tmp = C[0];
    C.erase(0,1);
   }
   --clen;
   if(clen == 0){
    cout << "C";
    break;
   }
  }
 }

}