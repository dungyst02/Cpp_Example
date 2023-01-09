// Program: Assigment_01 - Ex110
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;

int main() {
	cout << "\nThis is Assignment_1 - Ex 110.";
	int ngay, thang;
	cout << "\nNhap ngay: ";
	cin >> ngay;
	cout << "\nNhap thang";
	cin >> thang;
	
	if(thang == 2) {
		if(ngay >= 1 && ngay < 28) cout << "\nNgay tiep theo la: " << ngay + 1 << "/" <<thang;
		else cout << "\nNgay tiep theo la: 1/3" ;
	} else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
		if(ngay >= 1 && ngay < 31) cout << "\nNgay tiep theo la: " << ngay + 1 << "/" <<thang;
		else{
			if(thang == 12) cout << "\nNgay tiep theo la: 1/1";
			else cout << "\nNgay tiep theo la: 1/" << thang + 1; 
		} 
	} else {
		if(ngay >= 1 && ngay < 30) cout << "\nNgay tiep theo la: " << ngay + 1 << "/" <<thang;
		else cout << "\nNgay tiep theo la: 1/" << thang + 1; 
	}
	return 0;
}
