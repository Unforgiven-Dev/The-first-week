#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //Tối ưu hóa tốc độ đọc/ghi I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double cesius;
    
    //Đọc nhiệt độ C từ đầu vào
    if(cin >> cesius){
        //Áp dụng công thức chuyển đổi
        //Lưu ý: Dùng 9.0 và 5.0 để đảm bảo phép chia trả về số thực
        double fahrenheit = (cesius*9.0/5.0) + 32;

        //In kết quả làm tròn hai chữ số thập phân
        cout << fixed << setprecision(2) << fahrenheit << endl;
    }
return 0;
}