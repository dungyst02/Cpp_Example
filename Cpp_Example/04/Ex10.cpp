/*
Program: Assignment 4 - Exercise 10
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/

#include <stdio.h>
#include <stdbool.h>



bool prime(int number)
{
	int i;


	if (number != 2 && (number < 2 || number % 2 == 0))
		return false;

	for (i = 3; i < number - 1; i += 2) 	
		if (number % i == 0)
			return false;

	return true;
}

int main (void)
{
	int number, input;

	while (true) {
		printf("Enter a number to check for primality: ");
		if (!(input = scanf("%i", &number)) || input == EOF)
			break;
		printf(" %i %s a prime number.\n", number,
				(prime(number)) ? "is" : "is NOT");
	}

	return 0;
}