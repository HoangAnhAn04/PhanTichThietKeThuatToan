#include<bits/stdc++.h>
using namespace std;
int main(){
    long n, res=0, a[100005];
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    long m = a[n];
    for(int i = n-1;i>0;i--)
        if(a[i]<m) res+=m-a[i];
        else m=a[i];
    cout << res;
}