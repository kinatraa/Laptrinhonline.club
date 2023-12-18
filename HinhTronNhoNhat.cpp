#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int MOD = 1000000007;

struct point{
    double x, y;
};

point d1, d2, d3;

double canh(point a, point b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double dientich(){
    double a = canh(d1,d2);
    double b = canh(d1,d3);
    double c = canh(d2,d3);
    if(a == b+c) return (a/2.0)*(a/2.0)*M_PI;
    if(b == a+c) return (b/2.0)*(b/2.0)*M_PI;
    if(c == a+b) return (c/2.0)*(c/2.0)*M_PI;
    double a2 = a * a;
    double b2 = b * b;
    double c2 = c * c;
    if((a2 + b2 > c2) && (b2 + c2 > a2) && (c2 + a2 > b2)){
        double s = (a+b+c)/2.0;
        double tamgiac = sqrt(s * (s - a) * (s - b) * (s - c));
        double dientich = (a * b * c / (4.0 * tamgiac)) * (a * b * c / (4.0 * tamgiac)) * M_PI;
        return dientich;
    }
    else{
        double r = max(a, max(b, c)) / 2.0;
        return r*r*M_PI;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> d1.x >> d1.y;
        cin >> d2.x >> d2.y;
        cin >> d3.x >> d3.y;
        double ans = dientich();
        cout << ans << endl;
    }
}