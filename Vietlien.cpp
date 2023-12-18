#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

string s;
int n;

void backtrack(string res, int start){
    if(start == n){
        cout << res << endl;
        return;
    }
    int tmp = 0;
    for(int i = start; i < n; i++){
        tmp = tmp*10 + (s[i]-'0');
        if(tmp > 26 || tmp <= 0) break;
        backtrack(res + char(tmp-1+'a'), i+1);
    }
}

void solve(){
    cin >> s;
    n = s.size();
    backtrack("", 0);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}