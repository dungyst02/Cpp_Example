// Program: Assigment_01 - Ex115
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;

int main() {
	cout << "\nThis is Assignment_1 - Ex 115.";
	float xA, xB, xC, yA, yB, yC;
	cout << "\nNhap xA: ";
	cin >> xA;
	cout << "\nNhap xB: ";
	cin >> xB;
	cout << "\nNhap xC: ";
	cin >> xC;
	cout << "\nNhap yA: ";
	cin >> yA;
	cout << "\nNhap yB: ";
	cin >> yB;
	cout << "\nNhap yC: ";
	cin >> yC;
	
	
	float xAB, xAC, xBC, yAB, yAC, yBC;
	xAB = xB - xA;
	yAB = yB - yA;
	xAC = xC - xA;
	yAC = yC - yA;
	xBC = xC - xB;
	yBC = yC - yB;
	
	if(xAB*xAC + yAB*yAC == 0) cout << "Tam giac vuong tai A";
	else if(xAB*xBC + yAB*yBC == 0) cout <<"Tam giac vuong tai B";
	else if(xAC*xBC + yAC*yBC == 0) cout << "Tam giac vuong tai C";
	else cout << "Khong phai tam giac vuong";
	
	return 0;
}
