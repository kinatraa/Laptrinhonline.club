#include <bits/stdc++.h>
using namespace std;

#define ll long long
const long mod = 1e9+7;

main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    string s; cin >> s;
    int dem =0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') dem++;
    }
    int time = 0,res = 0;
    if(t%2==0 && dem%2==0){
        cout << s; 
        return 0;
    }
    while(t != time){
        res = dem;
        if(dem % 2 == 0) break;
        for(int i=0; i<s.size(); i++){
            if(dem %2 != 0){
                if(s[i] == '1'){
                    res--;
                    s[i] = '0';
                }
                else{
                    res++;
                    s[i] = '1';
                }
            }
        }   
        time++;
        dem = res;
        if(dem%2 !=0 && (t-time)%2==0) break;
    }
    cout << s;

}