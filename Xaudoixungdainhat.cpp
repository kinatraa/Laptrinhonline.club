#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int dp[1001][1001];

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    string s;
    cin >> s;
    int n = s.size(), j;
    memset(dp, 0, sizeof(dp));
    for(int k = 2; k <= n; k++){
        for(int i = 0; i < n-k+1; i++){
            j = i+k-1;
            if(s[i] == s[j]) dp[i][j] = dp[i+1][j-1];
            else{
                dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + 1;
            }
        }
    }
    cout << dp[0][n-1];
}