#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    unordered_set <string> a;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1; j++){
            a.insert(s.substr(j,i));
        }
    }
    vector <string> ans;
    for(const string& x : a){
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}