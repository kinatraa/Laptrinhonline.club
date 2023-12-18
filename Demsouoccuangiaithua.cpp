#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;
const int MAXN = 10001;

vector <int> sang(){
    vector <int> a(MAXN, true);
    vector <int> b;
    for (int i = 2; i < MAXN; ++i) {
        if (a[i]) {
            b.push_back(i);
            for (int j = i * 2; j < MAXN; j += i) {
                a[j] = false;
            }
        }
    }
    return b;
}

int dem(int n, int b) {
    int cnt = 0;
    while (n >= b) {
        cnt += n / b;
        n /= b;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector <int> b = sang();
    ll ans = 1;
    for (int x : b) {
        if (x > n) break;
        int cnt = dem(n, x);
        ans = (ans * (cnt + 1)) % MOD;
    }

    cout << ans;
}