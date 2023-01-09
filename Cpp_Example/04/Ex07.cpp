/*
Program: Assignment 4 - Exercise 7
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/
#include<iostream>
using namespace std;

long int x_to_the_n(int x, int n)
{
	int i;
	long int result;

	result = 1;
	for (i = 0; i < n; ++i)
		result *= x;

	return result;
}

int main(void) 
{
	int x, n;
	
	for (n = 0, x = 2; n < 8; ++n) 
		cout << x << "^" << n <<"="<< x_to_the_n(x, n);

	return 0;
}