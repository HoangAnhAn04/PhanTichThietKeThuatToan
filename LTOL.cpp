#include<custom.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    double sumArea = 0.0;
    double maxArea = 0.0;
    for (int i = 0; i < n; i++) {
        double l, r;
        cin >> l >> r;
        double area = l * r;
        sumArea += area;
        if (area > maxArea) {
            maxArea = area;
        }
    }
    double averageArea = sumArea / n;
    cout << fixed << setprecision(3) << averageArea << endl;
    cout << fixed << setprecision(3) << maxArea << endl;
    return 0;
}

