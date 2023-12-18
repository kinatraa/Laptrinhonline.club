#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;

int cmp(const pair<int, int> a, const pair<int, int> b){
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector <pair<int,int>> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(make_pair(x,i+1));
    }
    sort(a.begin(), a.end(), cmp);
    for(auto it : a){
        cout << it.second << " ";
    }
}