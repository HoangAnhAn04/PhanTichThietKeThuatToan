#include<bits/stdc++.h>
using namespace std;
template <class T>
T *UB(T *L, T *R, T x){
    if(*(R-1) <= x) return R;
    if(L==R-1) return L;
    T *M=L+(R-L)/2;
    if(*M <= x) return UB(M+1, R, x);
    return UB(L, M, x);
}
template <class T>
T *LB(T *L, T *R, T x){
    if(x<=*L) return L;
    if(L>=R) return R;
    T *M=L+(R-L)/2;
    if(*M < x) return LB(M+1, R, x);
    return LB(L, M, x);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={22,35,47,47,47,52,61,64,75,82,87,93},n=sizeof(a)/sizeof(int);

    int *p=lower_bound(a,a+n,47);
    int *q=LB(a,a+n,60);

    cout<<"phan tu dau tien "<<*p<<" tai vi tri "<<p-a<<endl;
    cout<<"phan tu dau tien "<<*q<<" tai vi tri "<<q-a<<endl;

}