/*
Program: Assignment 4 - Exercise 4
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/
#include<iostream>
using namespace std;
float absoluteValue(float x)
{
	if (x < 0)
		x = -x;

	return x;
}


float squareRoot(float x, const float epsilon)
{
	float guess = 1.0;

	while (absoluteValue(guess * guess - x) >= epsilon) {
		guess = (x / guess + guess) / 2.0;
		printf("%f\n", guess);
	}

	return guess;
}

int main (void) 
{
	const float epsilon = .00001;
    cout <<"squareRoot(2.0) = \n" <<squareRoot(2.0, epsilon);
    cout <<"squareRoot(144.0) \n"<< squareRoot(144.0, epsilon);
    cout <<"squareRoot(17.5) = \n"<< squareRoot(17.5, epsilon);

	return 0;
}