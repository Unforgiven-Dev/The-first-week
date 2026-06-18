#include <iostream>

using namespace std;

int main() {
    // Tối ưu hóa tốc độ đọc/ghi I/O (rất hữu ích cho các bài chấm điểm tự động)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;

    // Đọc hai số nguyên từ đầu vào chuẩn
    if (cin >> a >> b) {
        // Tính tổng và in kết quả ra màn hình
        cout << a + b << "\n";
    }

    return 0;
}