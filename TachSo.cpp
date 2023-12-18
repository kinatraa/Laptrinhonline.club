#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    ll n;
    int cnt = 0;
    cin >> n;
 while(n % 2 == 0){
  ++cnt;
  n/=2;
 }
    for(int i = 3; i <= sqrt(n); i+=2){
        while(n % i == 0){
            ++cnt;
            n /= i;
        }
    }
    if(n > 2) ++cnt;
    cout << cnt;
}