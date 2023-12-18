#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int a[4];
char b[3];
priority_queue <ll, vector<ll>, greater<ll>> ans;
bool visited[5] = {};

void backtrack1(ll sum, ll step)
{
    if(step == 3){
        ans.push(sum);
        return;
    }
    for(int i = 0; i < 4; i++){
        if(visited[i]) continue;
        visited[i] = true;
        if(b[step] == '+'){
            backtrack1(sum+a[i], step+1);
        }
        else{
            backtrack1(sum*a[i], step+1);
        }
        visited[i] = false;
    }
}

void backtrack2(ll sum1, ll sum2, ll step){
    if(step == 3){
        if(b[2] == '+'){
            ans.push(sum1+sum2);
        }
        else ans.push(sum1*sum2);
        return;
    }
    for(int i = 0; i < 4; i++){
        if(visited[i]) continue;
        visited[i] = true;
        if(step == 0){
            if(b[step] == '+'){
                backtrack2(sum1+a[i], sum2, step+1);
            }
            else{
                backtrack2(sum1*a[i], sum2, step+1);
            }
        }
        else if(step == 1){
            backtrack2(sum1, sum2+a[i], step+1);
        }
        else if(step == 2){
            if(b[step-1] == '+'){
                backtrack2(sum1, sum2+a[i], step+1);
            }
            else{
                backtrack2(sum1, sum2*a[i], step+1);
            }
        }
        visited[i] = false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i = 0; i < 4; i++) cin >> a[i];
    fflush(stdin);
    for(int i = 0; i < 3; i++) cin >> b[i];
    for(int i = 0; i < 4; i++){
        visited[i] = true;
        backtrack1(a[i], 0);
        backtrack2(a[i],0,0);
        visited[i] = false;
    }
    cout << ans.top();
}