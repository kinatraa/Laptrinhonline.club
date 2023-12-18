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
    int n;
    cin >> n;
    vector <int> a(n);
    int luu;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] >= MAX){
            MAX = a[i];
            luu = i;
        }
    } 
    int ban = 0, cnt = 0, mua = 0;
    for(int i = 0; i < n; i++){
        if(i != luu){
            mua -= a[i];
            ++cnt;
        }
        else{
            ban += (cnt*a[luu] + mua);
            MAX = -10000000;
            for(int j = i+1; j < n; j++){
                if(a[j] >= MAX){
                    MAX = a[j];
                    luu = j;
                }
            }
            cnt = 0;
            mua = 0;
        }
    }
    cout << ban;
}