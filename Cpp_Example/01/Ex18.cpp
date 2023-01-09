// Program: Assigment_01 - Ex18
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022

// Viết chương trình nhập vào số nguyên dương n là số điện tiêu thụ trong một tháng, tính tiền 
// điện phải trả trong tháng đó biết rằng đơn giá như sau: Từ 100 số trở xuống là 1 USD/1 KW, từ số thứ
// 101 tới 200 là 1.4 USD/1 KW, từ số thứ 201 tới 400 là 2.0 USD/1 KW, từ số 401 trở lên là 2.6 USD/1 KW.

#include<iostream>
using namespace std;

int main() {
    cout << "\nThis is Assignment_1 - Ex 18.";
    int n;
    cout << "\nNhap so dien tieu thu: ";
    cin >> n;
    double gia;
    if (n >= 0 && n <= 100) gia = n * 1;
    else if(n > 100 && n <=200) gia = 100 * 1 + (n - 100) * 1.4;
    else if(n > 200 && n <= 400) gia = 100 * 1 + 100 * 1.4 + (n - 200) * 2;
    else if(n > 400) gia = 100 * 1 + 100 * 1.4 +  200 * 2 + (n - 400) * 2.6;
    cout << "\nSo tien phai tra = "<<gia<<" USD";
    return 0;
}