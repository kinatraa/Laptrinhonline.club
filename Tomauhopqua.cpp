#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 2000000014;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<char,int> m;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) m[s[i]]++;
    int mot = 0, hai = 0, ba = 0;
    for(auto &it : m){
        if(it.second == 5 || it.second == 6){
            cout << 1;
            return 0;
        }
        if(it.second == 4){
            cout << 2;
            return 0;
        }
        if(it.second == 1) ++mot;
        else if(it.second == 2) ++hai;
        else if(it.second == 3) ++ba;
    }
    if(mot == 6) cout << 30;
    else if(mot == 4 && hai == 1) cout << 15;
    else if(mot == 3 && ba == 1) cout << 5;
    else if(mot == 1 && hai == 1 && ba == 1) cout << 3;
    else if(ba == 2) cout << 2;
    else if(mot == 2 && hai == 2) cout << 8;
    else if(hai == 3) cout << 6;
}