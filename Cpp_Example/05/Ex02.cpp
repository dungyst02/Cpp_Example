/*
Program: Assignment 5 - Exercise 2
Author: Nguyen Van Dung- 20203877
Date: 2022-1-5
*/

#include <stdio.h>

struct Date {
	int day;
	int month;
	int year;
};

int year(const int year, const int month)
{
	return (month <= 2) ? year - 1 : year;
}

int month(const int month)
{
	return (month <= 2) ? month + 13 : month + 1;
}

int days(const struct Date x)
{
	return (1461 * year(x.year, x.month)) / 4
		   + (153 * month(x.month)) / 5 + x.day;
}


int duration(const struct Date begin, const struct Date end)
{
	return days(end) - days(begin);
}

int main(void)
{
	struct Date begin, end;

	printf("Enter begin date (dd mm yyyy): ");
	scanf("%d%d%d", &begin.day, &begin.month, &begin.year);

	printf("Enter end date (dd mm yyyy): ");
	scanf("%d%d%d", &end.day, &end.month, &end.year);

	printf("Number of elapsed days is %i\n", duration(begin, end));
	
	return 0;
}