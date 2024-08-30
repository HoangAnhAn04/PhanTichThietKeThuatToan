#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> toado;
#define x first
#define y second
int main(){
    stack<toado> S;
    set<toado> Res;
    int x,y;
    cin >> x >> y;
    S.push({x,y});
    Res.insert({x,y});
    while (S.size()){
        int u=S.top().first, v=S.top().second;
        S.pop();
        if(u%2==0 && Res.find({v,u/2})==Res.end()) {S.push({v,u/2}); Res.insert({v,u/2});}
        if(v%2!=0 && Res.find({v/2+1,u})==Res.end()){ S.push({v/2+1,u}); Res.insert({v/2+1,u});
        }
    }
    cout << Res.size();
    // for(auto r:Res) cout<<r.first<<","<<r.second<<endl;
}