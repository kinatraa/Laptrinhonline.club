#include <bits/stdc++.h>
using namespace std;
struct matran{
    int m,n;
    long int **tp;
};
void nhap(matran &a,matran &b){
    cin >> a.m >> a.n;
    b.m=a.m;
    b.n=a.n;
    a.tp=new long int*[a.m+1*a.n+1];
    for(int i=0;i<a.m;i++){
        a.tp[i]=new long int[a.m+1];
        for(int j=0;j<a.n;j++){
            cin >> a.tp[i][j];
        }
    }
    b.tp=new long int*[a.m+1*a.n+1];
    for(int i=0;i<b.m;i++){
        b.tp[i]=new long int[b.m+1];
        for(int j=0;j<b.n;j++){
            cin >> b.tp[i][j];
        }
    }
}
matran cong(const matran &a, const matran &b){
    matran c;
    c.m=a.m;
    c.n=a.n;
    c.tp=new long int*[c.m+1*c.n+1];
    for(int i=0;i<c.m;i++){
        c.tp[i]=new long int[c.m+1];
        for(int j=0;j<c.n;j++){
            c.tp[i][j]=a.tp[i][j]+b.tp[i][j];
        }
    }
    return c;
}
void xuat(matran a){
    for(int i=0;i<a.m;i++){
        for(int j=0;j<a.n;j++){
            cout << a.tp[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    matran a,b,c;
    nhap(a,b);
    c=cong(a,b);
    xuat(c);
}