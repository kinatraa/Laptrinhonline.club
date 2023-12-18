#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;

vector <int> a;
int cnt = 0, dem = 0;

void tang(int n){
    cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]) return;
        if(a[i] == a[i+1]) ++cnt;
    }
    if(cnt == 0){
        cout << "Day don dieu tang ngat";
        ++dem;
    }
    else{
        cout << "Day don dieu tang";
        ++dem;
    }
}

void giam(int n){
    cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] < a[i+1]) return;
        if(a[i] == a[i+1]) ++cnt;
    }
    if(cnt == 0){
        cout << "Day don dieu giam ngat";
        ++dem;
    }
    else{
        cout << "Day don dieu giam";
        ++dem;
    }
}

void bang(int n){
    for(int i = 0; i < n-1; i++){
        if(a[i] != a[i+1]) return;
    }
    cout << "Day bang nhau";
    ++dem;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    bang(n);
    if(dem == 0) giam(n);
    if(dem == 0) tang(n);
    if(dem == 0) cout << "Day khong don dieu";
}