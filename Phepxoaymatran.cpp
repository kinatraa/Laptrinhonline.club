#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, a;
    cin >> n >> m >> a;
    a %= 360;
    int mt[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mt[i][j];
        }
    }
    if(a == 0){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << setw(6) << mt[i][j];
            }
            cout << endl;
        }
    }
    else if(a == 180 || a == -180){
        for(int i = n-1; i >= 0; i--){
            for(int j = m-1; j >= 0; j--){
                cout << setw(6) << mt[i][j];
            }
            cout << endl;
        }
    }
    else if(a == 270 || a == -90){
        for(int j = m-1; j >= 0; j--){
            for(int i = 0; i < n; i++){
                cout << setw(6) << mt[i][j];
            }
            cout << endl;
        }
    }
    else{
        for(int j = 0; j < m; j++){
            for(int i = n-1; i >= 0; i--){
                cout << setw(6) << mt[i][j];
            }
            cout << endl;
        }
    }
}