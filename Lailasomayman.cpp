#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Min = 1000000000000000;
ll len, n, cnt = 0;

void backtrack(int x, int i, int dem1, int dem2, ll tmp){
    if(dem1 > len/2 || dem2 > len/2) return;
    if(i+1 == len){
        if(tmp >= n && dem1 == dem2){
            Min = min(Min, tmp);
            ++cnt;
            return;
        }
    }
    backtrack(4,i+1,dem1+1,dem2, tmp*10+4);
    backtrack(7,i+1,dem1,dem2+1, tmp*10+7);
}

int main(){
    ll tmp;
    cin >> n;
    len = (int)log10(n) + 1;
    if(len % 2 != 0) ++len;
    backtrack(4,0,1,0,4);
    tmp = 0;
    backtrack(7,0,0,1,7);
    if(cnt == 0){
        len+=2;
        tmp = 0;
        backtrack(4,0,1,0,4);
        tmp = 0;
        backtrack(7,0,0,1,7);
    }
    cout << Min;
}