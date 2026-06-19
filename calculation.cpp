#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Toi uu hoa doc/ghi du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Khai bao kieu du lieu cho a,b va phep toan
    int a,b;
    
    //Doc du lieu tu dau vao
    if (cin >> a >> b){
       // Cac phep toan + - * /
       cout << a + b << endl << a - b << endl << a * b << endl << int(a / b) << endl;
    }
    return 0;
}