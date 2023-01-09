/*
Program: Assignment 4 - Exercise 9
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/

#include <stdio.h>



int absoluteValue(int x)
{
	if (x < 0)
		x = -x;

	return x;
}

int gcd(int u, int v)
{
	int temp;

	while (v != 0) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}


int lcm(int u, int v)
{
	if (u == 0 && v == 0)
		return 0;

	
	u = absoluteValue(u);
	v = absoluteValue(v);

	return (u * v) / gcd(u, v);
}

int main(void) 
{
	int u, v;

	printf("Enter two numbers to calculate the least common multiplier:\n");
	scanf("%i %i", &u, &v);
	printf("The LCM of %i and %i is %i\n", u, v, lcm(u, v));

	return 0;
}