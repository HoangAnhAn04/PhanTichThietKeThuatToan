#include<bits/stdc++.h>
using namespace std;
int main(){
    long n, k, m, res = 0, a;
    cin >> n >> k >> m;
    queue<long> q;
    for(int i = 1; i <= n+k-1; i++){
        if(i<=n) cin >> a;
        else a=0;
        q.push(a);
        while((long)q.size()>k) q.pop();
        long t=0;
        while(q.size()>0 && t+q.front()<=m){
            t+=q.front();
            q.pop();
        }
        if(t<m && q.size()){
            q.front()-=m-t;
            t=m;
        }
        res+=t;
    }
    cout << res;
}