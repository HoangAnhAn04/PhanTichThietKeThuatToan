#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long a, b; cin >> a >> b;
    cout << a + b << " ";
    cout << a - b << " ";
    cout << a * b << " ";
    cout << fixed << setprecision(2) << static_cast<double>(a) / b << " "; 
}