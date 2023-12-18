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
    string x, y;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector <int> b(n,1);
    vector <int> c(n,1);
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i-1]){
            b[i] = b[i-1]+1;
        }
    }
    for(int i = n-2; i >= 0; i--){
        if(a[i] >= a[i+1]){
            c[i] = c[i+1] + 1;
        }
    }
    int ans = INT32_MIN;
    for(int i = 0; i < n; i++){
        ans = max(ans,b[i]+c[i]-1);
    }
    cout << ans;
}