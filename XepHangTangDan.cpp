#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl "\n"

main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int test = 0;
    while(t--){
        test ++;
        int n; cin >> n;
        int a[n];
        // 3 4 2 1 5
        // 4 3 2 1 5 dap an la 3
        // 4 1 2 3 5 key la 2 
        for(int i=0; i<n; i++) cin >> a[i];
        int dem[n+1] = {}; 
  int res = 0;
        for(int i=0; i<n; i++){
            dem[a[i]] = dem[a[i]-1] +1;
   res = max(dem[a[i]], res);
        }
        cout << "#Case " << test << ": "  << n-res << endl;
    }
}