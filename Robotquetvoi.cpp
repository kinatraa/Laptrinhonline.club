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
    int a[3], b[3];
    int dem[100] = {0};
    for(int i = 0; i < 3; i++){
        cin >> a[i] >> b[i];
        for(int j = a[i]; j < b[i]; j++){
            dem[j]++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < 100; i++){
        if(dem[i] == 0) ++cnt;
    }
    cout << cnt;
}