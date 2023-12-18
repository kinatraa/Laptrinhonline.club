#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n+3][m+3];
    int khong[n+3][m+3] = {0};
    int mot[n+3][m+3] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] == 0) khong[i][j] = 1;
            else mot[i][j] = 1;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 0){
                if(a[i][j] == a[i-1][j-1] && a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1]){
                    khong[i][j] = min(khong[i-1][j-1], min(khong[i-1][j], khong[i][j-1])) + 1;
                }
                ans = max(ans,khong[i][j]);
            }
            else{
                if(a[i][j] == a[i-1][j-1] && a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1]){
                    mot[i][j] = min(mot[i-1][j-1], min(mot[i-1][j], mot[i][j-1])) + 1;
                }
                ans = max(ans,mot[i][j]);
            }
        }
    }
    cout << ans;
}