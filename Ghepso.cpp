#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

string a, b;
vector <string> ans;

void ma(ll i, ll j, string s)
{
    if(i >= a.size() || j >= b.size()){
        string tmp = s;
        for (; i < a.size(); i++)
        {
            tmp += a[i];
        }
        for (; j < b.size(); j++)
        {
            tmp += b[j];
        }
        ans.push_back(tmp);
        return;
    }
    if(a[i] > b[j]) ma(i+1,j,s+a[i]);
    else if(a[i] < b[j]) ma(i,j+1,s+b[j]);
    else{
        ma(i+1,j,s+a[i]);
        ma(i,j+1,s+b[j]);
    }
}

void mi(ll i, ll j, string s)
{
    if(i >= a.size() || j >= b.size()){
        string tmp = s;
        for (; i < a.size(); i++)
        {
            tmp += a[i];
        }
        for (; j < b.size(); j++)
        {
            tmp += b[j];
        }
        ans.push_back(tmp);
        return;
    }
    if(a[i] < b[j]) mi(i+1,j,s+a[i]);
    else if(a[i] > b[j]) mi(i,j+1,s+b[j]);
    else{
        mi(i,j+1,s+b[j]);
        mi(i+1,j,s+a[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    ma(0,0,"");
    mi(0,0,"");
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl << ans[ans.size()-1];
}