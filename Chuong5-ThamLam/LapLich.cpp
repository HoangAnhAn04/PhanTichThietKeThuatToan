#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, res=0, x=-INT_MAX;
    cin >> n;
    pair<int,int> A[n];
    for(auto &x:A) cin>>x.second>>x.first; //second - bat dau, firts - ket thuc
    sort(A,A + n);
    for(auto a:A) if(a.second>x) {x=a.first; res++;}
    cout << res;
}

