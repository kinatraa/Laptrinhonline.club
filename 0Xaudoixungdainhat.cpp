#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define linedown cout << '\n';
using namespace std;
string preprocess(string s){
 int n = s.size();
 if (n==0) return "^$";
 string res = "^";
 for (int i=0; i<n; i++){
  res += "#" + s.substr(i, 1);
 }
 res+="#";
 return res;
}
main(){
 //manacher
 faster();
 string s; cin >> s;
 s = preprocess(s); //nhet them '#' vao giua cac ki tu. bat dau chen vao tu s[0]
 int ans = 1;
 int n = s.size();
 int  l = 0, r = -1;
 vector<int> p(n+2);
 for (int i=0; i<n; i++){ //i: center of palindrome
  int k;
  if (i>r){
   k = 1;
  } else {
   int j = l+r-i;
   k = min(p[j], r-i);
  }
  while (i-k >=0 && i+k<n && s[i-k] == s[i+k]){
   k++; //thuat toan tam thuong tim do lon cua xau doi xung hien tai
  }
  if (s[i-k]!=s[i+k]){
   k--;
  }
  p[i] = k;
  if (i+k>r){
   l = i-k;
   r = i+k;
  }
  ans = max(k, ans);
 }
 cout << ans;
}