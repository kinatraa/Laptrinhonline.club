#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

string a;
void mot(){
 for(int i = 0; i < a.size(); i++){
  if(a[i] >= 65 && a[i] <= 90) cout << (char)(a[i]+32);
  else cout << (char)(a[i]-32);
 }
 cout << endl;
}

void hai(){
 for(int i = 0; i < a.size(); i++){
  if(a[i] > 90) cout << (char)(a[i]-32);
  else cout << a[i];
 }
 cout << endl;
}

void ba(){
 for(int i = 0; i < a.size(); i++){
  if(a[i] <= 90) cout << (char)(a[i]+32);
  else cout << a[i];
 }
 cout << endl;
}

void bon(){
 for(int i = 0; i < a.size(); i++){
  if(a[i] == 'a' || a[i] == 'A') cout << "a";
  else if(a[i] == 'e' || a[i] == 'E') cout << "e";
  else if(a[i] == 'i' || a[i] == 'I') cout << "i";
  else if(a[i] == 'o' || a[i] == 'O') cout << "o";
  else if(a[i] == 'u' || a[i] == 'U') cout << "u";
  else{
   if(a[i] > 90) cout << (char)(a[i]-32);
   else cout << a[i];
  }
 }
 cout << endl;
}

void nam(){
 for(int i = 0; i < a.size(); i++){
  if(i % 2 == 0){
   if(a[i] > 90) a[i]-=32;
   cout << a[i];
  }
  else{
   if(a[i] <= 90) a[i]+=32;
   cout << a[i];
  }
 }
 cout << endl;
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> a;
 cout << a << endl;
 mot();
 hai();
 ba();
 bon();
 nam();
}