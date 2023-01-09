// Program: Assigment_01 - Ex19
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;

int main() {
	cout << "\nThis is Assignment_1 - Ex 19.";
	float a, b, c;
	cout << "\nNhap so dau tien: ";
	cin >> a;
	cout << "\nNhap so thu hai: ";
	cin >> b;
	cout << "\nNhap so thu ba: ";
	cin >> c;
	if((a > b && a < c) || (a > c && a < b)) {
		cout << "\nSo o giua la " << a;
	}else if((b > a && b < c) || (b < a && b > c)) {
		cout << "\nSo o giua la " << b;
	}else if((c > a && c < b) || (c < a && c > b)) {
		cout << "\nSo o giua la " << c;
	}else if((a == b) || (a == c) || (b == c) || (a == b && a == c)) {
		cout << "\nKhong co so o giua.";
	}
	return 0;
}
