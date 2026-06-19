#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Toi uu hoa doc/ghi du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    

    //Ty gia co dinh
    const double exchange_rate = 23500;
    //Khai bao du lieu
    double vnd;
    
    //Nhap du lieu cho so tien viet nam dong
    if (cin >> vnd){
        cout << fixed << setprecision(2) << vnd*exchange_rate;
    }
    return 0;
}