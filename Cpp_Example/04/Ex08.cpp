/*
Program: Assignment 4 - Exercise 8
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


double squareRoot(double x)
{
	const double epsilon = 1.00001;
	double guess = 1.0;

	do {
		guess = (x / guess + guess) / 2.0;
	} while (absoluteValue((guess * guess) / x) >= epsilon); 
	return guess;
}

int main(void) 
{
	double a, b, c, x1, x2, discriminant;

	printf("Enter values for a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0) {
		printf("The value of (a) must be a nonzero constant\n");
		return -1;
	}

	discriminant = (b * b) - (4 * a * c);

	if (discriminant < 0)
		printf("The roots of the equation, x1 and x2, are imaginary.\n");
	else { 
		x1 = (-b + squareRoot(discriminant)) / (2 * a);
		x2 = (-b - squareRoot(discriminant)) / (2 * a);
		printf("x1 = %g, x2 = %g\n", x1, x2);
	}	
	return 0;
}