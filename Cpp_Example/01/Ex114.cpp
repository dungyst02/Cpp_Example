// Program: Assigment_01 - Ex113
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;

int main() {
	cout << "\nThis is Assignment_1 - Ex 114.";
	for(int i = 100; i <= 999; i++) {
		int temp_i = i;
		int sum = 0;
		int x;
		while(temp_i != 0) {
			x = temp_i  % 10;
			sum += x * x * x;
			temp_i /= 10;
		}
		if(sum == i ) cout << i << " ";
	}
	return 0;

}