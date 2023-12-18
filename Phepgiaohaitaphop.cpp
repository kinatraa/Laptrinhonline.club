#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    map <int,int> check;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    cin >> m;
    vector <int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    vector <int> ans;
    while(i < n && j < m){
        if(a[i] > b[j]){
            ++j;
        }
        else if(a[i] < b[j]) ++i;
        else{
            if(!check[a[i]]){
                ans.push_back(a[i]);
                check[a[i]]++;
            }
            ++i;
            ++j;
        }
    }
    for(int &x : ans){
        cout << x << " ";
    }
}