#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

map<int, string> HEX = {{0, "0"}, {1, "1"}, {2, "2"}, {3, "3"}, {4, "4"}, {5, "5"}, {6, "6"}, {7, "7"}, {8, "8"}, {9, "9"}, {10, "a"}, {11, "b"}, {12, "c"}, {13, "d"}, {14, "e"}, {15, "f"}};

string convert(int cnt){
    string tmp = "";
    while(cnt > 0){
        tmp += HEX[cnt%16];
        cnt /= 16;
    }
    return tmp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s, tmp = "";
        fflush(stdin);
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            char check = s[i];
            int cnt = 0;
            string tlp;
            while(i < n && s[i] == check){
                ++cnt;
                ++i;
            }
            --i;
            tlp = convert(cnt);
            tmp += (check + tlp);
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << endl;
    }
}