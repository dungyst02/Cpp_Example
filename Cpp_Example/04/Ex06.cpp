/*
Program: Assignment 4 - Exercise 6
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/
#include<iostream>
using namespace std;
double absoluteValue(double x)
{
	if (x < 0)
		x = -x;

	return x;
}

double squareRoot(double x, const double epsilon)
{
	double guess = 1.0;

	do {
		guess = (x / guess + guess) / 2.0;
	} while (absoluteValue(guess * (guess / x)) >= epsilon); 

	return guess;
}

int main (void) 
{
	const double epsilon = 1.00001;

    cout << "squareRoot(2.0) = \n" << squareRoot(2.0, epsilon);
    cout << "squareRoot(144.0) = \n" << squareRoot(144.0, epsilon);
    cout << "squareRoot(17.5) = \n" << squareRoot(17.5, epsilon);

	return 0;
}