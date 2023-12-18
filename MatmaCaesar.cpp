#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 int n;
 cin >> n;
 fflush(stdin);
 string s;
 cin >> s;
 cout << n << endl;
 for(int i = 0; i < s.size(); i++){
  char tmp = s[i]+n;
  if(tmp > 90) tmp-=26;
  cout << tmp;
 }
}