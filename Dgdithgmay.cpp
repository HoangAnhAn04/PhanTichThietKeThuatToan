#include<bits/stdc++.h>
using namespace std;
map<int, int> pi;
void path(int s, int f){
    if(s==f) cout << s;
    else{
        path(s, pi[f]);
        cout << "->" << f;
    }
}
int main(){
    int n, k , m, s, f;
    cin >> n >> k >> m >> s >> f;
    queue<int> Q;
    map<int, int> mp={{s,0}};
    Q.push(s);
    while (Q.size() && mp.find(f)==mp.end()){
        int u=Q.front(); Q.pop();
        for(int v:{u+k,u-m})
            if(0<v && v<=n && mp.count(v)==0){
                pi[v]=u;
                mp[v]=mp[u]+1;
                Q.push(v);
            }
    }
    if(mp.find(f)==mp.end()) cout << -1;
    else {
        cout << mp[f] << endl;
        path(s, f);
    }
} 
