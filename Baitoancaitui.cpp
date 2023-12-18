#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int n, k, cnt = 0;
vector <int> a;
priority_queue <int> ans;

void backtrack(int step, int sum){
    if(step == n) return;
    if(sum > k){
        ++cnt;
        return;
    } 
    ans.push(sum);
    for(int i = step; i < n; i++){
        backtrack(i+1,sum+a[i]);
        if(cnt != 0){
            cnt = 0;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    backtrack(0,0);
    cout << ans.top();
}