#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int cnt = 0, tmp = 0;

void backtrack(int step, int sum, int n){
    if(sum == n){
        ++cnt;
        return;
    }
    if(sum > n){
        ++tmp;
        return;
    }
    for(int i = step; i <= n; i++){
        backtrack(i,sum+i,n);
        if(tmp != 0){
            tmp = 0;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        backtrack(1,0,n);
        cout << cnt << endl;
        cnt = 0;
        tmp = 0;
    }
}