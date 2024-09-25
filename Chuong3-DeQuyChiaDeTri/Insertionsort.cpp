#include<bits/stdc++.h>
using namespace std;
void SX(int *a,int n) //sx a[0]...a[n-1] //4 7 2 8 1 6
{
    if(n==1) return;
    SX(a,n-1); //a[0]...a[n-2] //[1 2 4 7 8] 6
    for(int i=n-1; i>0; i--){
        if(a[i]<a[i-1]) swap(a[i],a[i-1]);
        else break; 
    }
}
int main(){
    int a[]={24,55,2346,437,12,67,658,4325,658},n=sizeof(a)/sizeof(int);
    SX(a,n);
    for(auto x:a) cout<<x<<" ";
}