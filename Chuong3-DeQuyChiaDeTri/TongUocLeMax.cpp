#include<bits/stdc++.h>
using namespace std;
long U(long n){
    if(n<2) return n;
    return ((n-1)/2+1)*((n-1)/2+1)+U(n/2);
}
int main(){
    long A, B,n;
    cin >> n;
    while(n--){
        cin >> A >> B;
        cout << U(B)-U(A-1) << "\n";
    }
}