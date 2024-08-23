#include<custom.h>
using namespace std;

int main(){
    stack<int> S;
    for(int x:{4,7,2,8,5}) S.push(x);

    cout<<"\nDinh cua S: "<<S.top();
    // S.pop();
    // S.push(9);
    S.top()=9;
    cout<<"\nDinh cua S: "<<S.top();
    cout<<"\nKich thuoc cua S: "<<S.size();

    S.top()*=2;
    cout<<"\nDinh cua S: "<<S.top();
}