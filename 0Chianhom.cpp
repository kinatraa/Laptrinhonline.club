#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
ll MOD = 1000000007;

int n, k;
int a[100];
vector<int> check;
int luu, cnt = 0;

void backtrack(int index, int step){
    if(step == k){
        if(luu == (a[n-1] - a[check.back()])) ++cnt;
        return;
    }
    for(int i = index; i < n-1; i++){
        if(check.empty()){
            check.push_back(i);
            luu = a[i];
        }
        else{
            if(luu != (a[i]-a[check.back()])) return;
            else{
                check.push_back(i);
            }
        }
        backtrack(i+1, step+1);
        if(!check.empty()) check.pop_back();
    }
}

void solve()
{
    cin >> n >> k;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i == 0) a[0] = x;
        else{
            a[i] = a[i-1]+x;
        }
    }
    if(n == 1 || k == 1){
        cout << 1;
        return;
    }
    backtrack(0, 1);
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}