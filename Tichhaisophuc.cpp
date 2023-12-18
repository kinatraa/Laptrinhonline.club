#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    string w;
    cin >> s >> w;
    int a[2] = {0}, cnt = 1;
    if(s[s.size()-1] == 'i'){
        a[1] = 1;
        string tmp = "";
        for(int i = s.size()-2; i >= 0; i--){
            if(s[i] >= '0' && s[i] <= '9'){
                tmp += s[i];
            }
            else{
                if(s[i] == '-'){
                    tmp += s[i];
                    if(tmp.size() == 1) tmp = "1-";
                }
                reverse(tmp.begin(), tmp.end());
                stringstream chuyen(tmp);
                chuyen >> a[cnt];
                cnt--;
                chuyen.clear();
                tmp = "";
            }
        }
        if(tmp != ""){
            reverse(tmp.begin(), tmp.end());
            stringstream chuyen(tmp);
            chuyen >> a[cnt];
            cnt--;
            chuyen.clear();
            tmp = "";
        }
    } 
    else{
        a[1] = 0;
        stringstream ss(s);
        ss >> a[0];
        ss.clear();
    }
    int b[2] = {0};
    cnt = 1;
    if(w[w.size()-1] == 'i'){
        b[1] = 1;
        string tmp = "";
        for(int i = w.size()-2; i >= 0; i--){
            if(w[i] >= '0' && w[i] <= '9'){
                tmp += w[i];
            }
            else{
                if(w[i] == '-'){
                    tmp += w[i];
                    reverse(tmp.begin(), tmp.end());
                    if(tmp.size() == 1) tmp += '1';
                }
                stringstream chuyen(tmp);
                chuyen >> b[cnt];
                cnt--;
                chuyen.clear();
                tmp = "";
            }
        }
        if(tmp != ""){
            reverse(tmp.begin(), tmp.end());
            stringstream chuyen(tmp);
            chuyen >> b[cnt];
            cnt--;
            chuyen.clear();
            tmp = "";
        }
    } 
    else{
        b[1] = 0;
        stringstream ss(w);
        ss >> b[0];
        ss.clear();
    }
    ll thuc = a[0]*b[0] - a[1]*b[1];
    ll phuc = a[0]*b[1] + a[1]*b[0];
    if(thuc == 0 && phuc == 0){
        cout << "0";
        return 0;
    } 
    if(thuc == 0){
        if(phuc == 1){
            cout << "i";
            return 0;
        }
        else if(phuc == -1){
            cout << "-i";
            return 0;
        }
        cout << phuc << "i";
    }
    else{
        if(phuc > 0){
            if(phuc != 1) cout << thuc << "+" << phuc << "i";
            else cout << thuc << "+i";
        } 
        else if(phuc < 0){
            if(phuc != -1) cout << thuc << phuc << "i";
            else{
                cout << thuc << "-i";
            }
        } 
        else cout << thuc;
    }
}