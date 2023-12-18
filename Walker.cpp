#include <bits/stdc++.h>
#define int long long
const int mod = 1000000007;
const int limit = 100001;
const int lech = 30;
using namespace std;
string str;
int n;
bool visited[lech*2][lech*2]={};
int x_end,y_end;
bool bad(int x,int y,int step){
    if(x>x_end && x-n+step > x_end) return true;
    if(x < x_end && x+n-step < x_end) return true;
    if(y > y_end && y-n+step > y_end) return true;
    if(y < y_end && y+n-step < y_end) return true;
    if(abs(x_end-x+y_end-y) % 2 != (n-step) % 2) return true;
    return false;
}
int backtrack(int x,int y,int step){
    if(visited[x+lech][y+lech]) return 0;
    if(bad(x,y,step)) return 0;
    if(x==x_end && y==y_end){
        if(step==n) return 1;
        return 0;
    }
    if(step==n) return 0;
    visited[x+lech][y+lech]=true;
    int res=0;
    if(str[step]=='R')res=backtrack(x+1,y,step+1);
    if(str[step]=='L')res=backtrack(x-1,y,step+1);
    if(str[step]=='U')res=backtrack(x,y+1,step+1);
    if(str[step]=='D')res=backtrack(x,y-1,step+1);
    if(str[step]=='_'){
        res+=backtrack(x+1,y,step+1);
        res+=backtrack(x-1,y,step+1);
        res+=backtrack(x,y+1,step+1);
        res+=backtrack(x,y-1,step+1);
    }
    visited[x+lech][y+lech]=false;
    return res;
}
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
 cin>>t;
    while(t--) {
        cin>>x_end>>y_end;
        cin>>str;
        n=str.size();
        cout<<backtrack(0,0,0)<<endl;
    }
}