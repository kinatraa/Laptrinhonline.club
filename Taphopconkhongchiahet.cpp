#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int a[n], b[k]={0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]%k]++;
    }
    int ans = 0;
    if(k % 2 != 0){
        for(int i = 1; i <= k/2; i++){
            ans += max(b[i], b[k-i]);
        }
        if(b[0] != 0) ans++;
    }
    else{
        for(int i = 1; i < k/2; i++){
            ans += max(b[i], b[k-i]);
        }
        if(b[k/2] != 0) ans++;
        if(b[0] != 0) ans++;
    }
    cout << ans;
}