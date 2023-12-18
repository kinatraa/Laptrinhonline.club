#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;

vector <int> a;
int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int l = n/2, cnt = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = l; j < n; j++){
            if(a[j] >= a[i]*2){
                ++cnt;
                l = j+1;
                break;
            }
        }
    }
    cout << n-cnt;
}