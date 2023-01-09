// Program: Assigment_01 - Ex30
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	cout << "\nThis is Assignment_1 - Ex 30.";
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	if(n < 2){
	   cout << n << " khong phai la so nguyen to ";
	    return 0;
	}
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++){
	    if(n % i == 0){
	        count++;
	    }
	}
	if(count == 0){
	    cout << n << " la so nguyen to";
	}else{
	    cout << n << " khong phai la so nguyen to ";
	}
	
	return 0;
}
