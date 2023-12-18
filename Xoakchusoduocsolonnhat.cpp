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
    string s;
    cin >> s;
    map <int, string> m;
    map <int, int> check;
    vector <int> test;
    m[0] = s;
    int cnt = 1, n = s.size();
    int t;
    cin >> t;
    int MAX = -1;
    while(t--){
        int x;
        cin >> x;
        if(x > MAX) MAX = x;
        check[x]++;
        test.push_back(x);
    }
    while(cnt <= MAX){
        int tmp = s.size();
        for(int i = 1; i < tmp; i++){
            if(s[i-1] < s[i]){
                s.erase(s.begin()+i-1);
                if(check[cnt]) m[cnt] = s;
                ++cnt;
                break;
            }
        }
        if(s.size() == tmp){
            s.pop_back();
            if(check[cnt]) m[cnt] = s;
            ++cnt;
        }
    }
    for(int i = 0; i < test.size(); i++){
        cout << m[test[i]] << endl;
    }
}