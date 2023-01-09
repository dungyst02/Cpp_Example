// Program: Assigment_01 - Ex40
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;

int main() {
	cout << "\nThis is Assignment_1 - Ex 40.";
	int m, n, i;
	cout << "\nNhap m: ";
	cin >> m;
	
	float a[m];
	cout << "\nNhap n: ";
	cin >> n;
	for(i = 0; i < n; i++) {
		cout << "\nNhap phan tu thu " << i + 1 << " :";
		cin >> a[i];
	}
	
	cout << n << " phan tu dau day la: ";
	for(i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	float sum = 0;
	for(i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << "\nTong " << n << " phan tu dau day la: ";
	
	//40.5
	float avg;
	avg = sum/n;
	cout << "\nCac phan tu lon hon trung binh "<<n << "phan tu dau la:";
	for(i = 0; i < n; i++) {
		if(a[i] >= avg) cout << a[i];
	}
	
	return 0;
}
