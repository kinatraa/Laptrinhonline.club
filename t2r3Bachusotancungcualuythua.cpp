#include <bits/stdc++.h>
using namespace std;

long long kt(long long a, long long b){
 a %= 1000;
 if(b == 0) return 1;
 else if(b == 1) return a;
 long long x = kt(a, b/2);
 return (x%1000)*(x%1000)*kt(a, b%2);
}

int main(){
 long long a, b;
 cin >> a >> b;
 a = kt(a,b);
 a %= 1000;
 if(a < 10) cout << "00" << a;
 else if(a >= 10 && a < 100) cout << "0" << a;
 else cout << a;
}