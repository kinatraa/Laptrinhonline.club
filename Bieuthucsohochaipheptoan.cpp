#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;
int MAX = -10000000;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    string tmp = "";
    int a[3], cnt = 0;
    char b[2];
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            tmp += s[i];
        }
        else{
            b[cnt] = s[i];
            int x;
            stringstream ss(tmp);
            ss >> x;
            a[cnt] = x;
            tmp = "";
            ss.clear();
            cnt++;
        }
    }
    if(tmp != ""){
        int x;
        stringstream ss(tmp);
        ss >> x;
        a[cnt++] = x;
    }
    cnt = 0;
    if((b[0] == '+' || b[0] == '-') && (b[1] == '*' || b[1] == '/')){
        int tmp;
        if(b[1] == '*') tmp = a[1]*a[2];
        else tmp = a[1]/a[2];
        if(b[0] == '+') tmp = tmp+a[0];
        else tmp = a[0]-tmp;
        cout << tmp;
    }
    else{
        int tmp;
        if(b[0] == '+') tmp = a[0]+a[1];
        else if(b[0] == '-') tmp = a[0]-a[1];
        else if(b[0] == '*') tmp = a[0]*a[1];
        else if(b[0] == '/') tmp = a[0]/a[1];
        if(b[1] == '+') tmp += a[2];
        else if(b[1] == '-') tmp -= a[2];
        else if(b[1] == '*') tmp *= a[2];
        else if(b[1] == '/') tmp /= a[2];
        cout << tmp;
    }
}