#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

int n, t;
vector <int> a;
map <int,int> m;

void bfs(){
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0,0});
    m[0] = 0;
    while(!q.empty()){
        pair<int,int> tmp = q.top();
        q.pop();
        for(int i = 0; i < n; i++){
            if(a[i]+tmp.second < 10001 && m[a[i]+tmp.second] == 0){
                m[a[i]+tmp.second] = tmp.first+1;
                q.push({tmp.first+1, a[i]+tmp.second});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<int>());
    bfs();
    while(t--){
        int x;
        cin >> x;
        if(x == 0){
            cout << 0 << endl;
            continue;
        }
        if(m[x] == 0) m[x] = -1;
        cout << m[x] << endl;
    }
}