// #include<bits/stdc++.h>
// using namespace std;
// map <int,long long> mp;
// long long zero(int n){
//     if(mp[n]==0){
//         if(n==0) return 1;
//         long long s=0;
//         for(int a=1;a*a<=n;a++)
//         if(n%a==0){
//             int m=(a-1)*(n/a+1);
//             s+=zero(m);
//         }
//         mp[n]=s;
//     }   
//     return mp[n];
// }
// int main(){
//     int n; cin >> n;
//     cout << zero(n);
// }
#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7;
//dung map de nho(dau vao-dau ra)
map<int, long long> Dic;
long long zero(int n)
{
    // n= a*b >> (a<b) a*a 
    // m=(a-1)(b+1)=ab-(b-a-1)<=n-1 
    //b-a-1>=1
    if(Dic.find(n)!= Dic.end()) return Dic[n];
    if(n==0) return Dic[n]=1;
    long long s=0;
    for(int a=1; a*a<=n;a++) //ptich n
    if(n%a==0) s=(s+zero((a-1)*(n/a+1)))%M;
    return Dic[n]=s;

}
int main()
{
    int test,n;
    cin>>test;
    while(test--){
        cin>>n;
        cout<<zero(n)<<"\n";
    }
}