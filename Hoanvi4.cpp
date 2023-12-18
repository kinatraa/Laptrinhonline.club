#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, cnt = 0;
bool check[100] = {};
int a[100];

void backtrack(int m){
    if(m == n){
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        ++cnt;
        cout << endl;
        return;
    } 
    for(int i = 1; i <= n; i++){
        if(check[i]) continue;
        a[m] = i;
        if(m > 0){
            if((a[m]+a[m-1]) % 4 == 0) continue;
        }
        check[i] = true;
        backtrack(m+1); 
        check[i] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    cin >> n;
    backtrack(0);
    cout << cnt;
}