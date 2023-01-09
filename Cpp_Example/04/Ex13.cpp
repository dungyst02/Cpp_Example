/*
Program: Assignment 4 - Exercise 13
Author: Nguyen Van Dung- 20203877
Date: 2022-12-22
*/

#include <stdio.h>
#include <stdbool.h>


void sort(int a[], int n, bool sordOrder)
{
	int i, j, temp, cond;

	for (i = 0; i < n - 1; ++i) 
		for (j = i + 1; j < n; ++j) {
			cond = (sordOrder) ? a[i] < a[j] : a[i] > a[j];
			if (cond) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}

int main(void) 
{
	int i;
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                     44, -3, -9, 12, 17, 22, 6, 11};

	printf("\nBefore sorting:\n");
	for (i = 0; i < 16; ++i)
		printf(" %i", array[i]);

	sort(array, 16, 0);
	printf("\n\nSorted in ascending order:\n");
	for (i = 0; i < 16; ++i)
		printf(" %i", array[i]);

	sort(array, 16, 1);
	printf("\n\nSorted in descending order:\n");
	for (i = 0; i < 16; ++i)
		printf(" %i", array[i]);

	printf("\n\n");

	return 0;
}