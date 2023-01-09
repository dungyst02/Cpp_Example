// Program: Assigment_01 - Ex36
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;
#include <math.h>

int main() {
	cout << "\nThis is Assignment_1 - Ex 36.";
	float a, b, c;
	cout << "\nNhap a: ";
	cin >> a;
	cout << "\nNhap b: ";
	cin >> b;
	cout << "\nNhap c: ";
	cin >> c;
	
	if(a == 0) {
		// bx + c = 0
		cout << "\nx = " << -b / a;
	}else {
		// ax^2 + bx + c = 0
		float delta;
		delta = b*b - 4*a*c;
		if(delta < 0) cout << "\nVo nghiem";
		else if(delta == 0) cout << "\nNghiem kep: " << -b / (2 * a); 
		else {
		cout << "\nx1 = " <<  (-b + sqrt(delta))/(2*a);
		cout << "\nx2 = " <<  (-b - sqrt(delta))/(2*a);
	}
		}
	
	
	
	return 0;
}
