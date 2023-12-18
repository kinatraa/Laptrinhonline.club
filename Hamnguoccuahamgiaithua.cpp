#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans;
    cin >> n;
    for(int i = 1; i <= n; i++){
        ans = i;
        n/=i;
    }
    cout << ans;
}