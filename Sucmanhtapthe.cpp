#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
int k[20];
ll a[20][20];
ll ans = -1;

void backtrack(int step, ll tmp){
    if(step == n){
        ans = max(ans, tmp%m);
        return;
    }
    for(int i = 0; i < k[step]; i++){
        backtrack(step+1, tmp+a[step][i]);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> k[i];
        for(int j = 0; j < k[i]; j++){
            cin >> a[i][j];
            a[i][j] = a[i][j]*a[i][j];
        }
    }
    backtrack(0,0);
    cout << ans;
}