#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pow1(ll x){
    ll res = 10;
    for(int i=1; i<x; i++){
        res = res*10;
    }
    return res;
}

int main(){
    int t; cin >> t;
    ll n;
    while(t--){
        cin >> n;
        ll dem_scs = log10(n), dem = 0;
        dem_scs++;
        ll res = pow1(dem_scs)-1;
        // neu n < 99/2 thi quy ve so chin nhieu nhat la 1 th thoa man la 9 19 29 39 49 59 69 79 89 
        // con khong thi se tinh nhu bthg
        if(res ==n){
            dem += (res-1)/2;
        }
        else if(res/2 >= n){
            for(ll i=res-pow1(dem_scs-1); i>=0; i-=pow1(dem_scs-1)){
                if(i > n*2) continue;
                else if(i<=n){ 
                 //   cout << i << " ";
                    dem += (i-1)/2;
                }
                else if(i-n <=n){
                    ll tmp = i-n-1;
                    dem += (i-1)/2-tmp;
                 //   cout << i << " " << tmp << " "<< dem << endl;
                }
                
            }
        }
        else{
            ll tmp = res - n;
            for(ll i=tmp; i>=0; i--){
                if(res - i <= n && res - i >= 0){
                    continue;
                }
                else{ dem += (res-1)/2 - i; break;}
            }
        }
    if (n<5) cout << n*(n-1)/2 << endl;
    else cout << dem << endl;
    }
}