#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,M=1e4;
    cin>>n>>q;
    int a[n];
    for(auto &x:a) cin>>x;
    queue<int> Q; Q.push(0);
    map<int, int> mp={{0,0}};
    while(Q.size()){
        int u=Q.front(); Q.pop();
        for(int x:a){
            if(u+x<=M and mp.count(u+x)==0){
                Q.push(u+x);
                mp[u+x]=mp[u]+1;
            }
        }
    }
    while(q--){
        cin>>M;
        if(mp.find(M)!=mp.end()) cout<<mp[M]<<endl;
        else cout<< -1<<endl;
    }
}