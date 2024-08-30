// Bài toán lượng nước - kỹ thuật cuốn chiếu
#include<custom.h>
using namespace std;
long mymax(long a, long b) {return a>b ? a:b;}
int main(){
    long n, res = 0;
    cin >> n;
    vector<long> a(n,0), L(n,0), R(n,0);
    for(auto &x:a) cin >> x;
    partial_sum (a.begin(), a.end(), L.begin(), mymax);
    partial_sum (a.rbegin(), a.rend(), R.rbegin(), mymax);
    for(int i = 1; i < n-1; i++) {
        long z = min(L[i-1], R[i+1]);
        if(z > a[i]) res += z - a[i];
    }
    cout << res;
}