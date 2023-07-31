#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct date {
	int month;
	int day;
	int year;
};

int compare_dates(struct date d1, struct date d2);

int main( void )
{
	struct date d1 = {
		5,
		10,
		1980
	};
	
	struct date d2 = {
		3,
		24,
		1981
	};
	int num;
	
	num = compare_dates(d1, d2);
	
	printf("%d\n", num);

	return 0;
}

int compare_dates(struct date d1, struct date d2)
{
	if(d1.year < d2.year)
	{
		return -1;
	}
	
	if(d1.year > d2.year)
	{
		return 1;
	}
	
	if(d1.month < d2.month)
	{
		return -1;
	}
	
	if(d1.month > d2.month)
	{
		return 1;
	}
	
	if(d1.day < d2.day)
	{
		return -1;
	}
	
	if(d1.day > d2.day)
	{
		return 1;
	}
}

