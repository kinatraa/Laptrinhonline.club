#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int MOD = 1e9 + 7;
const int MAXN = 1e5+5;

class Node{
public:
    int min_val, cnt, gcd;
    Node(int x){
        min_val = gcd = x;
        cnt = 1;
    }
    Node(){
        min_val = INT_MAX;
        cnt = gcd = 0;
    }
    friend Node add(Node, Node);
    friend void build(int, int, int);
    friend void update(int, int, int, int, int);
    friend Node get(int, int, int, int, int);
};

vector<Node> tree(4*MAXN+5);
vector<int> A;

Node add(Node a, Node b){
    Node res;
    res.min_val = min(a.min_val, b.min_val);
    res.cnt = a.cnt * (a.min_val == res.min_val) + b.cnt * (b.min_val == res.min_val);
    res.gcd = __gcd(a.gcd, b.gcd);
    return res;
}

void build(int i = 1, int l = 1, int r = MAXN){
    if(l == r){
        if(l <= A.size()) tree[i] = Node(A[l-1]);
        return;
    }
    int mid = (l+r)/2;
    build(i*2, l, mid);
    build(i*2+1, mid+1, r);
    tree[i] = add(tree[i*2], tree[i*2+1]);
}

void update(int pos, int val, int i = 1, int l = 1, int r = MAXN){
    if (pos < l || pos > r) return;
    if (l == r){
        tree[i] = Node(val);
        return;
    }
    int mid = (l + r) / 2;
    update(pos, val, i*2, l, mid);
    update(pos, val, i*2+1, mid + 1, r);
    tree[i] = add(tree[i*2], tree[i*2+1]);
}

Node get(int u, int z, int i = 1, int l = 1, int r = MAXN){
    if (r < u || l > z) return Node();
    if (l >= u && r <= z) return tree[i];
    int mid = (l + r) / 2;
    return add(get(u, z, i*2, l, mid), get(u, z, i*2+1, mid + 1, r));
}

void solve(){
    int n, q;
    cin >> n >> q;
    A.resize(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    build();
    int l, r, x, v;
    while(q--){
        char c;
        cin >> c;
        if(c == 'C'){
            cin >> x >> v;
            update(x, v);
        }
        else if(c == 'M'){
            cin >> l >> r;
            cout << get(l,r).min_val << endl;
        }
        else if(c == 'G'){
            cin >> l >> r;
            cout << get(l,r).gcd << endl;
        }
        else{
            cin >> l >> r;
            Node res = get(l, r);
            cout << (res.min_val == res.gcd ? res.cnt : 0) << endl;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}