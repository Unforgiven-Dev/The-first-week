#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Tối ưu hóa đọc/ghi dữ liệu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Khai báo hệ số a, b
    double a,b;
    
    //Nhập dữ liệu cho hệ số a, b
    if (cin >> a >> b){
        if (a == 0){
            if (b == 0)
                cout << "VO SO NGHIEM" << endl; // Vô số nghiệm khi a = b = c = 0
            else
                cout << "VO NGHIEM" << endl; // Vô nghiệm khi a = 0 và b != 0
        }    
        else 
            // Trường hợp a != 0, phương trình có nghiệm là (-b)/a
            // In kết quả làm tròn tới hai chữ số thập phân
            cout << fixed << setprecision(2) << (-b)/a << endl; 
    }
    return 0;
}