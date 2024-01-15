#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; 
    long long a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n, greater<int>());
    long long dp[n+1];
    dp[0]=a[0];
    for(int i=1; i<n; i++){
        dp[i]=a[i];
        for(int j=0; j<i; j++){
            if(a[i]<a[j] && __gcd(a[i],a[j])==1){
                dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
    }
    long long res=0;
    for(int i=0; i<n; i++) res=max(res,dp[i]);
    cout<<res;
}
