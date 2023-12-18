#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int MOD = 1000000007;

void solve()
{
 int n, k, x;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> s1(n+1, 0);
    vector<int> s2(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> x;
        s1[i] = s1[i-1]+a[i-1];
        if(x == 1) s2[i] = s2[i-1]+a[i-1];
        else s2[i] = s2[i-1];
    }
    int tmp = INT64_MIN;
    for(int i = 0; i <= n-k; i++){
        tmp = max(tmp, s1[i+k]-s1[i]-s2[i+k]+s2[i]);
    }
    cout << s2[n]+tmp;
}

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 solve();
}