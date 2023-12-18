#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 string a, b;
    cin >> a >> b;
    double cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i]) ++cnt;
    }
    cnt = round(cnt/a.size()*100)/10;
    cout << cnt;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}