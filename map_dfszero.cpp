#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    stack<int> S;
    map<int,bool> res;
    S.push(n);
    res[n]=true;
    while(S.size()){
        int u=S.top(); S.pop();
        for(int a=1;a<=u;a++){
            int v=(a-1)*(u/a+1);
            if(res[v]==0){
                S.push(v);
                res[v]=1;
            }
        }
    }
    for(auto x:res) cout<<x.first<<" ";
}