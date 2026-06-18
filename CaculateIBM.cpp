#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Tối ưu hóa tốc độ đọc/ghi I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Khai báo kiểu dữ liệu cho cân nặng và chiều cao
    float weight, height;

    //Đọc cân nặng chiều, chiều cao từ đầu vào
    if (cin >> weight >> height){
        // Áp dụng công thức chuyển đổi và in kết quả làm tròn tới một chữ số thập phân
        cout << fixed << setprecision(1) << weight/(height*height) << "\n";
    }
    return 0;
}