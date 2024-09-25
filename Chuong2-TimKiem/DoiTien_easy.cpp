#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,M;
    cin>>n>>M;
    int a[n];
    for(auto &x:a) cin>>x;
    queue<int> Q; Q.push(0);
    map<int, int> mp={{0,0}};
    while(Q.size() && mp.count(M)==0){
        int u=Q.front(); Q.pop();
        for(int x:a){
            if(u+x<=M && mp.count(u+x)==0){
                Q.push(u+x);
                mp[u+x]=mp[u]+1;
            }
        }
    }
    if(mp.count(M)==0) cout<< -1;
    else cout<<mp[M];
}