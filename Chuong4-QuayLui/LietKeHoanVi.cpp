#include<bits/stdc++.h>
using namespace std;
bool check(int *x, int k, int t){
    for(int i=1;i<k;i++) if(x[i]==t) return 0;
    return 1;
}
void TRY(int *x,int k, int n){
    if(k-1==n){
        for(int i=1; i<=n; i++) cout << x[i];
        cout << "\n";
    }
    for(int t=1; t<=n;t++)
    if(check(x,k,t)){

    }
}