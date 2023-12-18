#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

struct tree{
    int n;
    vector<tree*> child;
    tree(int k = 0){n = k;}
};

tree *add(int x){
    tree *tmp = new tree(x);
    if(x){
        for(int i = 1; i*i <= x; i++){
            if(x % i == 0){
                int y = (i-1)*(x/i+1);
                tmp->child.push_back(add(y));
            }
        }
    }
    return tmp;
}

void preorder(tree *tmp){
    if(!tmp) return;
    cout << tmp->n << " ";
    for(auto i : tmp->child) preorder(i);
}

void inorder(tree *tmp){
    if(!tmp) return;
    if(tmp->child.size()) inorder(tmp->child[0]);
    cout << tmp->n << " ";
    for(int i = 1; i < tmp->child.size(); i++) inorder(tmp->child[i]);
}

void postorder(tree *tmp){
    if(!tmp) return;
    for(auto i : tmp->child) postorder(i);
    cout << tmp->n << " ";
}

void solve(){
    int n;
    cin >> n;
    tree *a = add(n);
    preorder(a); cout << endl;
    inorder(a); cout << endl;
    postorder(a);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}