/*
Program: Assignment 4 - Exercise 15
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 64 /* see chapter 14. The #define Statement */

/* globals */
int gConvertedNumber[SIZE];
long int gNumberToConvert;
int gBase;
int gDigit = 0;

/* functions */
void getNumberAndBase(void);
void convertNumber(void);
void displayConvertedNumber(void);

void getNumberAndBase(void)
{
	printf("Number to be converted? ");
	scanf("%li", &gNumberToConvert);

	while (true) {
		printf("Base? ");
		scanf("%i", &gBase);
		if (gBase >= 2 && gBase <= 16) /* break if base is withing range */
			break;
		printf("Invalid base - must be between 2 and 16\n");
	}
}
	
void convertNumber(void)
{
	do {
		gConvertedNumber[gDigit] = gNumberToConvert % gBase;
		++gDigit;
		gNumberToConvert /= gBase;
	} while (gNumberToConvert != 0);
}

void displayConvertedNumber(void)
{
	const char baseDigits[16] =
	{ '0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	int nextDigit;

	printf("Converted number = ");

	for (--gDigit; gDigit >= 0; --gDigit) {
		nextDigit = gConvertedNumber[gDigit];
		printf("%c", baseDigits[nextDigit]);
	}
	printf("\n");
}

int main(void)
{
	getNumberAndBase();
	convertNumber();
	displayConvertedNumber();
	return 0;
}