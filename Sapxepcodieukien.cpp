#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    priority_queue <int, vector<int>, greater<int>> du0;
    priority_queue <int, vector<int>, greater<int>> du1;
    priority_queue <int, vector<int>, greater<int>> du2;
    while(n--){
        int x;
        cin >> x;
        if(x % 3 == 0) du0.push(x);
        else if(x % 3 == 1) du1.push(x);
        else du2.push(x);
    }
    while(!du0.empty()){
        cout << du0.top() << " ";
        du0.pop();
    }
    while(!du1.empty()){
        cout << du1.top() << " ";
        du1.pop();
    }
    while(!du2.empty()){
        cout << du2.top() << " ";
        du2.pop();
    }
}