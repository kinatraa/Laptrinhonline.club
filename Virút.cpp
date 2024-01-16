#include <bits/stdc++.h>

using namespace std;
int main(){
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
        int res = 0;
		while(n>0){
            res += n%3;
            n/=3;
        }
        cout << res << " ";
	}
	
}
