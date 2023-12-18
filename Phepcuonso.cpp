#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

ll ans = INT64_MAX, n, a, b;
int dau, cuoi, len;

void bfs(){
    queue <pair<ll,int>> q;
    q.push({n,len});
    while(!q.empty()){
        pair <ll,int> tmp = q.front();
        q.pop();
        dau = tmp.first / (ll)pow(10,tmp.second);
        cuoi = tmp.first % 10;
        tmp.first %= (ll)pow(10,tmp.second);
        tmp.first /= 10;
        if(dau + cuoi > 9) continue;
        a = (dau+cuoi)*(ll)pow(10, tmp.second-1) + tmp.first;
        b = tmp.first*10 + (dau+cuoi);
        len = log10(a);
        ans = min(ans, min(a,b));
        q.push({a,len});
        q.push({b,len});
    }
}

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    cin >> n;
    len = log10(n);
    bfs();
    cout << ans;
}