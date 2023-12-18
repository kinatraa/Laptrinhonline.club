#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
string gen[2];
int cnt = 0;
string ans[1000];

void backtrack(string s, int step){
    if(step == n){
        ans[cnt] = s;
        ++cnt;
        return;
    }
    for(int i = 0; i < 2; i++){
        backtrack(s+gen[i][step], step+1);
        if(gen[0][step] == gen[1][step]) return;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n;
    cin >> gen[0] >> gen[1];
    backtrack("", 0);
    cout << cnt << endl;
    sort(ans, ans+cnt);
    for(int i = 0; i < cnt; i++){
        cout << ans[i] << endl;
    }
}