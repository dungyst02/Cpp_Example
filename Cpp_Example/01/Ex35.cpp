// Program: Assigment_01 - Ex35
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
#include <math.h>
using namespace std;


int main() {
	cout << "\nThis is Assignment_1 -  Ex35.";
	float a, b, c;
	cout << "\nNhap a: ";
	cin >> a;
	cout << "\nNhap b: ";
	cin >> b;
	cout << "\nNhap c: ";
	cin >> c;
	if((a + b) > c && (a + c) > b && (b + c) > a){
		float chuVi, dienTich, p;
		chuVi = a + b + c;
		
		p = chuVi/2; // nua chu vi
		dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "\nChu vi cua tam giac: " << chuVi;
		cout << "\nDien tich cua tam giac: " << dienTich;
	}else cout << "\nkhong phai tam giac";
	
	return 0;
}
