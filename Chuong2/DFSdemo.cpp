#include<custom.h>
using namespace std;
int main(){
    // set<int> S;
    // for(int x:{4,7,2,8,4,8,3,2,4,6,2,4}) S.insert(x);   
    // for(int s:S) cout<<s<<" ";
    cout<<"\n";
    map<int,int> M={{3,7},{12,4},{-5,9},{1,7}};
    cout<<M[12]<<"\n";
    cout<<M[-5]<<"\n";
    cout<<M.size()<<"\n";
    cout<<M[15]<<"\n";
    cout<<M.size()<<"\n";
    M[8]=6;

    for(auto m:M) cout<<m.first<<" "<<m.second<<"\n";
}