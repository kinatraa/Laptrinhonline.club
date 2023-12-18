#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;

struct tree{
    int data, depth;
    tree *left, *right;
    tree(int x, int d = 0, tree *l = nullptr, tree *r = nullptr){
        data = x;
        depth = d;
        left = l;
        right = r;
    }
};

void add(tree *&a, int x, int d = 0){
    if(a == nullptr){
        a = new tree(x, d);
        return;
    }
    if(x == a->data){
        return;
    }
    if(x < a->data){
        if(a->left == nullptr) a->left = new tree(x, d+1);
        else add(a->left,x,d+1);
    }
    else{
        if(a->right == nullptr) a->right = new tree(x, d+1);
        else add(a->right,x,d+1);
    }  
}

void ans(tree *a){
    if(a == nullptr) return;
    ans(a->left);
    cout << a->data << " " << a->depth << endl;
    ans(a->right);
}

void solve(){
    int n, x;
    tree *a = nullptr;
    cin >> n;
    while(n--){
        cin >> x;
        add(a, x);
    }
    ans(a);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}