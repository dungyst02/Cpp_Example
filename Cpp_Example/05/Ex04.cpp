/*
Program: Assignment 5 - Exercise 4
Author: Nguyen Van Dung- 20203877
Date: 2022-1-5
*/

#include <stdio.h>

struct Date {
	int  day;
	int  month;
	int  year;
};

struct WeekDays {
	char day[9];
};

/* functions */
int year(const int, const int);
int month(const int);
int days(const struct Date);


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

int main(void)
{
	int i;
	struct Date d;
	const struct WeekDays days_of_week[] = { {"Sunday"},
											 {"Monday"},
											 {"Tuesday"},
											 {"Wednesday"},
											 {"Thursday"},
											 {"Friday"}, 
											 {"Saturday"} };

	printf("Enter a date (dd mm yyyy): ");
	scanf("%d%d%d", &d.day, &d.month, &d.year);

	i = (days(d) - 621049) % 7;

	printf("%s\n", days_of_week[i].day);
	
	return 0;
}