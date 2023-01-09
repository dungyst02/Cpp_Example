// Program: Assigment_01 - Ex113
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;



int main() {
	cout << "\nThis is Assignment_1 - Ex 113.";
	float a1, b1,c1, a2, b2, c2;
	cout << "\nNhap a1: ";
	cin >> a1;
	cout << "\nNhap b1: ";
	cin >> b1;
	
	cout << "\nNhap c1: ";
	cin >> c1;
	
	cout << "\nNhap a2: ";
	cin >> a2;
	
	cout << "\nNhap b2: ";
	cin >> b2;
	
	cout << "\nNhap c2: ";
	cin >> c2;

	
	float D, Dx, Dy, x, y;
	
	//Dung  cramer
	D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0) {
        if (Dx + Dy == 0)
            cout << "\nHe phuong trinh co vo so nghiem";
        else
            cout << "\nHe phuong trinh vo nghiem";
    }
    else {
        x = Dx / D;
        y = Dy / D;
        cout << "\nHPT co nghiem x, y = " << x <<", "<< y;
    }
	return 0;
}
