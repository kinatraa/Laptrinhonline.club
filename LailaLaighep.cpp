#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int n;

void backtrack(vector <char> m[], int step, string s, int cnt){
    if(cnt >= 3) return;
    if(step == n){
        cout << s << endl;
        return;
    }
    int len = m[step].size();
    if(len == 1){
        if(m[step][0] == 'A') backtrack(m, step+1, s+m[step][0], 0);
        else backtrack(m, step+1, s+m[step][0], cnt+1);
    } 
    else{
        for(int i = 0; i < 2; i++){
            if(m[step][i] == 'A') backtrack(m, step+1, s+m[step][i], 0);
            else backtrack(m, step+1, s+m[step][i], cnt+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    n = a.size();
    vector <char> m[n];
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]) m[i].push_back(a[i]);
        else{
            if(a[i] > b[i]) swap(a[i],b[i]);
            m[i].push_back(a[i]);
            m[i].push_back(b[i]);
        }
    }
    backtrack(m, 0, "", 0);
}