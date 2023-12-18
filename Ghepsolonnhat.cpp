#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int a, b, c;
ll ans = -1;

void backtrack(int so1, int so2, int so3, int i){
 if(i == 3) return;
 ll tmp = so1*pow(10,(int)log10(so2)+(int)log10(so3)+2) + so2*pow(10,(int)(log10(so3))+1) + so3;
 ans = max(ans,tmp);
 backtrack(so2,so3,so1,i+1);
}

int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 cin >> a >> b >> c;
 backtrack(a,b,c,0);
 backtrack(a,c,b,0);
 cout << ans;
}