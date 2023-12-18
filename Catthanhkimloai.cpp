#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

map<int, int> ans;

struct node{
    int u, v;
    node *left, *right;
    node(int x, int y, node *l = nullptr, node *r = nullptr){
        u = x;
        v = y;
        left = l;
        right = r;
    }
};

void add(node* a, int x){
    if(a->left == nullptr && a->right == nullptr){
        a->left = new node(a->u, x);
        a->right = new node(x, a->v);
        if(ans.size()){
            if(ans[a->v-a->u] == 1) ans.erase(a->v-a->u);
            else ans[a->v-a->u]--;
        }
        ans[x-a->u]++;
        ans[a->v-x]++;
        return;
    }
    if(x < a->left->v) add(a->left, x);
    else add(a->right, x);
}

void solve(){
    int n, m, x;
    scanf("%lld%lld", &n, &m);
    node *a = new node(0, m);
    while(n--){
        scanf("%lld", &x);
        add(a,x);
        auto it = ans.end();
        --it;
        printf("%lld ", it->first);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
}