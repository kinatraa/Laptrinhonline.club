#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const long MOD = 1e9 + 7;

void solve(){
    int a['z'+1] = {0};
    string s;
    cin >> s;
    for(char x : s){
        a[x]++;
    }
    for(char i = 'a'; i <= 'z'; i++){
        if(a[i] == 0) cout << i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}