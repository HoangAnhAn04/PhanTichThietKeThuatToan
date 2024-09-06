// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a[]={22,35,47,47,47,52,61,64,75,82,87,93},n=sizeof(a)/sizeof(int);

//     int *p=upper_bound(a,a+n,47);
//     int *q=lower_bound(a,a+n,47);

//     cout<<"phan tu dau tien "<<*p<<" tai vi tri "<<p-a<<endl;
//     cout<<"phan tu dau tien "<<*q<<" tai vi tri "<<q-a<<endl;

// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,res,M;
    cin>>n>>M;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n); //Sap xep a[0] <= a[1] <= ... <= a[n-1]
    for(int i=1;i<n;i++){
        auto *p=upper_bound(a,a+i,M-a[i]);
        res+=p-a;
    }
    cout<<res;
}