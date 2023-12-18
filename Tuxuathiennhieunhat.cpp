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
    int t;
    cin >> t;
    while(t--){
        int n, k;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        cin >> k;
        map <string, int> m;
        string tmp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                m[tmp]++;
                tmp = "";
            }
            else{
                tmp += s[i];
            }
        }
        if(tmp != "") m[tmp]++;
        vector <pair<string,int>> a;
        for(auto &x: m){
            a.push_back(make_pair(x.first, x.second));
        }
        sort(a.begin(), a.end(), [](const pair<string,int> &a, const pair<string,int> &b){
            if(a.second == b.second) return a.first < b.first;
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++){
            cout << a[i].first << " ";
        }
        cout << endl;
    }
}