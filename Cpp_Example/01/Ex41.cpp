// Program: Assigment_01 - Ex41
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;
#include <stdbool.h>

int main() {
	
	cout << "\nThis is Assignment_1 - Ex 41.";
	int n, i;
	
	cout << "\nNhap n: ";
	cin >> n;
	float a[n];
	
	for(i = 0; i < n; i++) {
		cout <<"\nNhap phan tu thu " << i + 1 << " :";
		cin >>a[i];
	}
	cout << n << " phan tu dau day la: ";
	for(i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	
	bool isSorted = true;
	i = 0;
	while(i < n-1) {
		if(a[i] > a[i+1]) {
			isSorted = false;
			break;	
		} 
		else i += 1;
	}
	if(!isSorted){
		int j;
		float tempt;
		for(i = 0; i < n-1; i++) {
			for(j = 0; j < n-i-1; j++) {
				if(a[j] > a[j+1]) {
					tempt = a[j];
					a[j] = a[j+1];
					a[j+1] = tempt;
				}
			}
		}
		cout << "\nDay sau khi sap xep la: ";
		for(i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
	}else cout << "\nDay da duoc sap xep";
	
	return 0;
}
