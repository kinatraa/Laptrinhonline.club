#include <bits/stdc++.h>
using namespace std;

int main()
{
 string a, b;
 int n, m;
 cin >> a; cin >> n;
 cin >> b; cin >> m;
 if(n == m) cout << a << " cao bang " << b;
 else if(n > m) cout << a << " cao hon " << b;
 else cout << b << " cao hon " << a;
}