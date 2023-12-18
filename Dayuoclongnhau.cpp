#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

vector<string> ans;
int maxlen = -1;

void backtrack(vector<int> uoc, int n, string s, int start, int check){
    if(start >= n){
        ans.push_back(s);
        int tmp = s.size();
        maxlen = max(tmp, maxlen);
        return;
    }
    for(int i = start; i < n; i++){
        if(uoc[i] % check == 0)
            backtrack(uoc,n,s+to_string(uoc[i])+" ", i+1, uoc[i]);
    }
}

void solve(){
    int k;
    cin >> k;
    vector<int> uoc;
    for(int i = 1; i <= sqrt(k); i++){
        if(k % i == 0){
            uoc.push_back(i);
            if(k/i != i) uoc.push_back(k/i);
        }
    }
    sort(uoc.begin(), uoc.end());
    int n = uoc.size();
    backtrack(uoc,n,"",0,1);
    string res = "1";
    for(string x : ans){
        if(x.size() == maxlen){
            if(x > res) res = x;
        }
    }
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}