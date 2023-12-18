#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

vector <int> mu;
int base;

int div(){
    int tmp = 0, i;
    vector <int> res;
    for(i = 0; i < mu.size(); i++){
        tmp = tmp*10 + mu[i];
        res.push_back(tmp/2);
        tmp %= 2;
    }
    while(res[0] != 0){
        res.erase(res.begin());
    }
    mu = res;
    return tmp;
}

int kt(){
    for(int i = 0; i < mu.size(); i++){
        if(mu[i] != 0) return 0;
    }
    return 1;
}

int power(){
    if(kt()) return 1;
    int du = div();
    int tmp = power();
    int res = (tmp*tmp) % 1000;
    if(du == 1){
        res = (res*base) % 1000;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < b.size(); i++) mu.push_back(b[i]-'0');
    if(a.size() < 3){
        stringstream ss(a);
        ss >> base;
    }
    else{
        base = 0;
        for(int i = a.size()-3; i < a.size(); i++){
            base = base*10 + (a[i]-'0');
        }
    }
    int ans = power();
    if(ans < 10) cout << "00";
    else if(ans < 100) cout << "0";
    cout << ans;
}