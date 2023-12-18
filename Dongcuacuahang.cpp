#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;
int MAX = -10000000;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, cnt = 0, luu;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0){
            if(a[i] < a[i-1]){
                if(cnt == 0) luu = i;
                ++cnt;
            } 
        }
    }
    if(cnt >= 2) cout << "DONG CUA";
    else if(cnt == 0) cout << "-1";
    else{
        if(luu <= 1){
            if(luu == n-1) cout << luu+1;
            else cout << luu;
        }
        else{
            if(a[luu] < a[luu-2]){
                if(luu != n-1) cout << "DONG CUA";
                else cout << luu+1;
            } 
            else{
                cout << luu;
            }
        }
    }
}