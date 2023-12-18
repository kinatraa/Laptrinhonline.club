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
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin>> a[i];
    map <int, pair<int,int>> m;
    int cnt = 1, ans = -1;
    for(int i = 0; i < n-1; i++){
        m[a[i]].first = i;
        m[a[i]].second++;
        for(int j = i+1; j < n; j++){
            if(m[a[j]].second == 0){
                m[a[j]].first = j;
                m[a[j]].second++;
                ++cnt;
            }
            else{
                ans = max(ans,cnt);
                cnt = 1;
                i = m[a[j]].first;
                m.clear();
                break;
            }
        }
    }
    cout << ans;
}