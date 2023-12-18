#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n*2);
    for(int i = 0; i < n*2; i+=2){
        cin >> a[i];
        a[i+1]=a[i];
    }
    sort(a.begin(), a.end());
    int cnt = 0;
    for(int i = 0; i < n*2; i++){
        if(a[i] <= m){
            m -= a[i];
            ++cnt;
        }
        else{
            if((int)(a[i]/2) <= m){
                m -= a[i]/2;
                ++cnt;
            }
            else break;
        }
    }
    cout << cnt;
}