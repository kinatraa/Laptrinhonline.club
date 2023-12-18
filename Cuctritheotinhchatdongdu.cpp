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
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    map <int,int> m;
    for(int i = 0; i < n; i++){
        int tmp = a[i]%3;
        if(tmp < 0){
            tmp += 3;
        }
        if(m.find(tmp) == m.end()) m[tmp] = a[i];
        if(m.find(1) != m.end() && m.find(2) != m.end() && m.find(0) != m.end()) break;
    }
    sort(a.begin(), a.end());
    map <int,int> k;
    for(int i = 0; i < n; i++){
        int tmp = a[i]%3;
        if(tmp < 0){
            tmp += 3;
        }
        if(k.find(tmp) == k.end()) k[tmp] = a[i];
        if(k.find(1) != k.end() && k.find(2) != k.end() && k.find(0) != k.end()) break;
    }
    for(int i = 0; i < 3; i++){
        if(m.find(i) == m.end() && k.find(i) == k.end()){
            cout << "Khong co so nao chia 3 du " << i << endl;
        }
        else{
            cout << k[i] << " " << m[i] << endl;
        }
    }
}