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
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = n-1, j = n-1;
    int sum = 0, cnt = 0;
    while(i >= 0){
        if(a[j] >= a[i]+k){
            j--;
        }
        else{
            sum += a[i];
            ++cnt;
        }
        i--;
    }
    cout << cnt << " " << sum;
}