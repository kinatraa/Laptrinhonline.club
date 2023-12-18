#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
 priority_queue <long long,vector<long long>,greater<long long> > q;
 long long n, k, s = 0, temp = 0, dem = 0;
 cin >>n >> k;
 long long a[n];
 for(int i = 0; i < n; i++){
  cin >> a[i];
  q.push(a[i]);
 }
 while(q.size() != 1){
  s += q.top();
  temp += q.top();
  ++dem;
  q.pop();
  if(dem == k){
   q.push(temp);
   temp = 0;
   dem = 0;
  }
 }
 cout << s+q.top();
}