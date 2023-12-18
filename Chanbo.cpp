#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
 int n, cnt = 0;
 float x, y;
 cin >> n;
 map<float,int> mp1;
 map<float,int> mp2;
 map<float,int> mp3;
 map<float,int> mp4;
 for(int i = 0; i < n; i++){
  cin >> x >> y;
  if(x > 0 && y >= 0){
   mp1[y/x]++;
  }
  else if(x <= 0 && y > 0){
   mp2[x/y]++;
  }
  else if(x < 0 && y <= 0){
   mp3[y/x]++;
  }
  else{
   mp4[x/y]++;
  }
 }
 cout << mp1.size()+mp2.size()+mp3.size()+mp4.size();
}