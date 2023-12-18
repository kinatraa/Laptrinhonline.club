#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

map<string, string> m;
deque<char> q;
int len;
vector <string> res;

void backtrack(string ans)
{
    if (q.empty())
    {
        res.push_back(ans);
        return;
    }
    string a = "";
    stack<char> luu;
    while (!q.empty())
    {
        a += q.front();
        luu.push(q.front());
        q.pop_front();
        if (m[a] != "")
        {
            backtrack(ans + m[a] + " ");
        }
    }
    while (!luu.empty())
    {
        q.push_front(luu.top());
        luu.pop();
        a.pop_back();
    }
}

int main()
{
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        fflush(stdin);
        cin >> a >> b;
        m[a] = b;
    }
    len = s.size();
    for (int i = 0; i < len; i++)
    {
        q.push_back(s[i]);
    }
    backtrack("");
    if(res.size() == 0){
        cout << "Toto bo tay";
        return 0;
    }
    sort(res.begin(), res.end());
    for(string &x : res){
        cout << x << endl;
    }
}