#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct{
    char ben;
    ll co;
}luu;

int cmp(const void *a, const void *b){
    luu *x = (luu*)a;
    luu *y = (luu*)b;
    return x->co - y->co;
}

ll doi(string a){
    ll n = 0, m = a.size();
    for(ll i = m-1; i >= 0; i--){
        n +=  ((a[i] - '0') * pow(10,m-i-1)); 
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
    int n;
    cin >> n;
    string a[n+1];
    luu b[n+1];
    fflush(stdin);
    for(int i = 0; i <= n; i++){
        getline(cin, a[i]);
        b[i].ben = a[i][0];
        a[i].erase(0,1);
        b[i].co = doi(a[i]);
        fflush(stdin);
    }
    qsort(b, n+1, sizeof(luu), cmp);
    stack <char> l;
    stack <ll> r;
    ll cnt = 0;
    for(ll i = 0; i <= n; i++){
        if(l.empty()){
            l.push(b[i].ben);
            r.push(b[i].co);
        }
        else{
            if(b[i].co == r.top() && b[i].ben != l.top()){
                ++cnt;
                r.pop();
                l.pop();
            }
            else{
                l.push(b[i].ben);
                r.push(b[i].co);
            }
        }
    }
    cout << cnt;
}