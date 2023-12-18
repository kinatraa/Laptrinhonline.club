#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const long MOD = 1e9 + 7;

int a[1000005] = {0};
vector<int> f;

void sang(int n){
 a[0] = 1;
 a[1] = 1;
 for(int i = 2; i <= sqrt(n); i++){
  if(a[i] == 0){
   f.push_back(i);
   for(int j = i*i; j <= min(n, (int)1000000); j+=i){
    a[j] = 1;
   }
  }
 }
}

int pow_mod(int a, int k, int n)
{
    a = a % n;
    int res = 1;
    while (k)
    {
        if (k & 1)
            res = (res * a) % n;
        a = (a * a) % n;
        k /= 2;
    }
    return res;
}

bool test(int a, int n, int k, int m)
{
    int mod = pow_mod(a, m, n);
    if (mod == 1 || mod == n - 1)
            return true;
    for (int l = 1; l < k; ++l)
    {
        mod = (mod * mod) % n;
        if (mod == n - 1)
            return true;
    }
    return false;
}

bool MillerRabin(int n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 23 || n == 29 || n == 31 || n == 37)
        return true;
    int k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        m /= 2;
        k++;
    }

    vector<int> checkSet = {2,3,5,7,11,13,17,19,23,29,31,37};
    for (auto a : checkSet)
        if (!test(a, n, k, m))
            return false;
    return true;
}

void solve(){
 int n;
 cin >> n;
 sang(n);
 // sort(f.begin(), f.end(), greater<int>());
 // for(int x : f){
 //  cout << x << " ";
 // }
 int res = 1, cnt = 0, tmp;
 for(int x : f){
  tmp = 0;
  while(n % x == 0){
   ++tmp;
   n/=x;
  }
  if(tmp){
   res *= (tmp+1);
   ++cnt;
   if(n == 1) break;
   if(MillerRabin(n)){
    res *= 2;
    ++cnt;
    break;
   }
   else{
    if(n > MOD){
     if(n % 2 == 0){
      res *= 2;
      ++cnt;
      continue;
     }
     int check = 0;
     for(int i = 3; i <= sqrt(n); i+=2){
      if(n % i == 0){
       ++check;
       break;
      }
     }
     if(check == 0){
      res *= 2;
      ++cnt;
      break;
     }
    }
   }
  }
 }
 cout << res - cnt;
}

main() {
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 solve();
}