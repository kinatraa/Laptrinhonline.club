#include <bits/stdc++.h>
using namespace std;
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;
const int lech = 110;
bool visited[lech*2][lech*2]={};
keqing(){
    int t;std::cin>>t;
    while(t--) {
        int a,b;cin>>a>>b;
        int x,y;cin>>x>>y;
        int dx,dy;cin>>dx>>dy;
        int k;cin>>k;
        for(int i=0;i<lech*2;i++){
            for(int j=0;j<lech*2;j++){
                visited[i][j]=false;
            }
        }
        queue<pair<pair<int,int>,int>>qu;
        qu.push({{x,y},0});
        visited[x+lech][y+lech]=true;
        int res = -1;
        while(!qu.empty()){
            auto temp = qu.front();qu.pop();
            int i,j;
            i=temp.first.first+a,j=temp.first.second+b;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first+a,j=temp.first.second-b;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first-a,j=temp.first.second+b;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first-a,j=temp.first.second-b;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first+b,j=temp.first.second+a;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first+b,j=temp.first.second-a;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first-b,j=temp.first.second+a;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
            i=temp.first.first-b,j=temp.first.second-a;
            if(i+lech>0 && i+lech<lech*2 && j+lech>0 && j+lech<lech*2 && visited[i+lech][j+lech]==false && temp.second+1<=k){
                if(i==dx && j==dy){
                    res=temp.second+1;
                    break;
                }
                qu.push({{i,j},temp.second+1});
                visited[i+lech][j+lech]=true;
            }
        }
        if(res==-1)cout<<"NO"<<endl;
        else cout<<res<<endl;
    }
}