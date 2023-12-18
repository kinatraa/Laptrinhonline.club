#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll MOD = 1000000007;
int MAX = -10000000;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    while(n--){
        int sum[2] = {0};
        for(int j = 0; j < 2; j++){
            for(int i = 0; i < 3; i++){
                char x;
                cin >> x;
                if(x == 'A') sum[j]++;
                else sum[j] += (x-'0');
            }
            if(sum[j] > 10 && sum[j] <= 20) sum[j]-=10;
            else if(sum[j] > 20) sum[j]-=20;
        }
        if(sum[0] > sum[1]) ++cnt1;
        else if(sum[0] < sum[1]) ++cnt2;
    }
    cout << cnt1 << " " << cnt2;
}