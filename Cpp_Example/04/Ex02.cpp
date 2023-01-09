/*
Program: Assignment 4 - Exercise 2
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/
#include <iostream>
using namespace std;

int calculateTriangularNumber(int n)
{
	int i, triangularNumber;

	triangularNumber = 0;
	for (i = 0; i <= n; ++i)
		triangularNumber += i;

	return triangularNumber;
}

int main()
{
    int number;

	for (int i = 0; i <= 5; i ++ ) {
		cout << "\nWhat triangular number do you want ";
		cin>>number;
		cout<<"Triangular number " << number << " is " <<
				calculateTriangularNumber(number);
	}

    return 0;
}