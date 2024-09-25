#include<bits/stdc++.h>
using namespace std;
// void Thu(string x,int n){
//     if(x.size()==n) cout << x << endl;
//     else for(char c:{'0','1'}) Thu(x+c,n);
// }
void Thu(string x, int n) {
    if (x.size() == n) {
        if (x.find("010") == string::npos) { // Kiểm tra nếu chuỗi không chứa "010"
            cout << x << endl;
        }
    } else {
        for (char c : {'0', '1'}) {
            Thu(x + c, n);
        }
    }
}

int main(){
    int n;
    cin >> n;
    Thu("",n);
}