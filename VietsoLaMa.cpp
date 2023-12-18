#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const long MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    while(n>=10){
        cout << "X";
        n-=10;
    }
    while(n>=5){
        cout << "V";
        n-=5;
    }
    while(n>=1){
        cout << "I";
        n--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}