#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int n, m, k;
int ans = -1;

void backtrack(string s, int dem1, int dem2, int dem3, int step){
    if(dem1 > n || dem2 > m || dem3 > k) return;
    if(step == (n+m+k)){
        int tmp = 0;
        for(int i = 0; i < s.size()-2; i++){
            if(s[i+1] > s[i] && s[i+1] > s[i+2]) ++tmp;
        }
        ans = max(ans,tmp);
    }
    backtrack(s+"a",dem1+1,dem2,dem3,step+1);
    backtrack(s+"b",dem1,dem2+1,dem3,step+1);
    backtrack(s+"c",dem1,dem2,dem3+1,step+1);
}

int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n >> m >> k;
    backtrack("",0,0,0,0);
    cout << ans;
}