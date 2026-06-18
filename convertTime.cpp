#include <iostream>

using namespace std;

int main(){
    // Tối ưu hóa tốc độ đọc/ghi I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Khai báo kiểu dữ liệu cho giờ, phút, giây
    int h, m, s;
    
    // Đọc giờ, phút, giây từ đầu vào 
    if (cin >> h >> m >> s){
    //Chuyển đổi giờ phút giay ra giây
    cout << h*3600 + m*60 + s << endl;
    return 0;
    }
}