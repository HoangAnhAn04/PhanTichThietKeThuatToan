#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,k, a[100005],res=0;
    cin >> n >> k;
    for(int i = 0;i<=n-1;i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    // for(int i=0; i<n-1; i++)
    //     if(a[i]>i*k) res+=a[i]-i*k;
    for(int i=0; i<n && a[i]>i*k;i++) res+=a[i]-i*k;
    cout << res;
}