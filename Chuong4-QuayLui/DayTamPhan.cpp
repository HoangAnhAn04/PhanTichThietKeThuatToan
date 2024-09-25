#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void Thu(int *x,int k, int n) 
{
    if(k-1==n){
        cnt++;
        for(int i=1;i<k;i++) cout <<x[i] <<" ";
        cout << "\n";
    }
    else
    for(x[k]=0;x[k]<=2;x[k]++)
    // {
        // if(k>1 && x[k]==x[k-1]) continue;
        // if(k>1 && (x[k]+x[k-1]%3==0)) continue;
        // Thu(x,k+1,n);
    // }
    if(k==1 or (x[k]!=x[k-1] and (x[k]+x[k-1])%3!=0)) Thu(x,k+1,n);
}
int main(){
    int x[1000],n;
    cin >> n;
    Thu(x,1,n);
    cout<<cnt;
}