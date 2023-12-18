#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 string s;
 getline(cin, s);
 int n = s.size();
 for(int i = 0; i < n; i++){
  if(s[i] < 'a' || s[i] > 'z'){
   cout << "NO";
   return 0;
  }
 }
 cout << "YES";
}