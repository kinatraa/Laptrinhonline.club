#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;
const long N = 1 << 10; 
const int MAXN = 5005;

map<char,int> M = {{'C',12},{'H',1},{'O',16}, {'(', 0}};
int sol(string s){
    stack <int> st;
    int m = 0;
    for(auto c:s){
        if(c == '(' ||  c == 'C' || c == 'H' || c == 'O' ){
            st.push(M[c]);
        }
        else if(c == ')'){
            int tmp = 0;
            while(!st.empty() && st.top()){
                tmp += st.top();
                st.pop();
            }
            st.pop();
            st.push(tmp);
        }
        else st.top() *= (c - '0');
    }
    while(!st.empty()){
        m += st.top();
        st.pop();
    }
    return m;
}

main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << sol(s) << endl;
    }
}