// Program: Assigment_01 - Ex18
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
// Viết chương trình nhập vào 3 số thực a, b, c hãy chỉ ra số ở giữa tức là số không phải max cũng 
// không phải min trong ba số đó, trong trường hợp có ít nhất hai số bằng nhau xuất ra thông báo không 
// có số ở giữa
#include<iostream>
using namespace std;


int main() {
    double a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >>c;

    if( a == b || a == c || b == c) cout <<"\nKhong co so o giua";
    if(a > b && b < c 
    ) cout << "\nSo o giua: " << b;
    if(c > a && a < b) cout << "\nSo o giua: " << a;
    if(a > c && c < b) cout << "\nSo o giua: " << c;

    return 0;
}