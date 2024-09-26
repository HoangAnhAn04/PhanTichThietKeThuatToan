#include <iostream>
using namespace std;

int main() {
    long long a, b, c, n;
    cin >> a >> b >> c >> n;

    // Tìm số lượng tiền xu lớn nhất mà bất kỳ chị em nào hiện có
    long long max_coins = max(a, max(b, c));

    // Tính tổng số tiền xu cần thiết để tất cả các chị em có max_coins
    long long total_needed = (max_coins - a) + (max_coins - b) + (max_coins - c);

    // Kiểm tra xem Polycarp có đủ tiền xu và số tiền xu còn lại có thể được phân phối đều không
    if (n >= total_needed && (n - total_needed) % 3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
