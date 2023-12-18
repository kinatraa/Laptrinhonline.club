#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    int cnt[27] = {0};
    for(char c : a) cnt[c-'A']++;
    sort(cnt, cnt+27, greater<int>());
    int res = 0;
    for(int i = 0; i <= 26; i++){
        if(cnt[i] <= k){
            res += (cnt[i]*cnt[i]);
            k -= cnt[i];
        }
        else{
            res += (k*k);
            break;
        }
    }
    cout << res;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}