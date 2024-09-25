#include<bits/stdc++.h>
using namespace std;

void TRY(int *x,int k, int n) // Gia su da co x1...x[k-1]
{
    if(k-1==n){
        for(int i=1;i<k;i++) cout <<x[i];
        cout << "\n";
    }
    else{
        x[k]=0;
        TRY(x,k+1,n);
        x[k]=1;
        TRY(x,k+1,n);
    }
}
int main(){
    int x[1000],n;
    cin >> n;
    TRY(x,1,n);
}