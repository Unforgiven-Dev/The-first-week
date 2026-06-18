#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Tối ưu hóa đọc/ghi I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //Khai báo hằng số PI = 3.14159
    const double pi = 3.14159;

    double r;
    if (cin >> r){
        //Tính diện tích hình tròn
        cout << fixed << setprecision(2) << r*r*pi << "\n";
        cout << fixed << setprecision(2) << r*2*pi << "\n";
    }
    return 0;
}