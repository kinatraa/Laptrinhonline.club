#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin >> n;
 map <long long, long long> m;
 vector <pair<long long,long long>> a;
 for(int i = 0; i < n; i++){
  long long x;
  cin >> x;
  m[x]++;
 }
 for(auto it:m){
  long long x = it.first;
  long long y = it.second;
  a.push_back(make_pair(x,y));
 }
 sort(a.begin(), a.end(), [](auto &left, auto &right) {
  if(left.second == right.second) return left.first < right.first;
     return left.second < right.second;
 });
 for (auto& p : a) {
        cout << p.first << " ";
    }
}