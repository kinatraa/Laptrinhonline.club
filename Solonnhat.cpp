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
    int n, m;
    cin >> n >> m;
    int a[n+1];
    int b[m];
    int luu;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] >= MAX){
            MAX = a[i];
            luu = i;
        }
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < m; i++){
        a[b[i]]*=(-1);
        if(b[i] != luu){
            if(a[b[i]] <= a[luu]){
                cout << a[luu] << " ";
            }
            else{
                luu = b[i];
                cout << a[luu] << " ";
            }
        }
        else{
            MAX = -10000000;
            for(int i = 1; i <= n; i++){
                if(a[i] >= MAX){
                    MAX = a[i];
                    luu = i;
                }
            }
            cout << a[luu] << " ";
        }
    }
}