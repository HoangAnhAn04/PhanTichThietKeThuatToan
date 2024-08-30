#include<bits/stdc++.h>
using namespace std;
long long DAC(int n){
    return n<=4 or n%2?1:DAC(n/2+2)+DAC(n/2-2);
}
void ve(int n, string p="\n"){
    if(n>4 && n%2==0) ve(n/2-2,p+"\t");
    cout<<p<<n;
    if(n>4 && n%2==0) ve(n/2+2,p+"\t");
}
int main(){
    cout << DAC(60);
    ve(60);
}