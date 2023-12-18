#include <bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//template <typename T>
//using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

void solve(){
    string s;
    cin >> s;
    if(s.size() == 1 || s[0] == '0') cout << "NO\n";
    else{
        int n = 0;
        for(int i = 0; i < s.size()/2; i++){
            n = n*10 + (s[i] - '0');
            string tmp = to_string(n);
            int d = n + 1;
            while(tmp.size() < s.size()){
                tmp += to_string(d);
                ++d;
            }
            if(tmp.size() != s.size()) continue;
            else{
                if(tmp == s){
                    cout << "YES " << n << endl;
                    return;
                }
            }
        }
        cout << "NO\n";
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}