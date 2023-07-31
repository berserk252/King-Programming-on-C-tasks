#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct time {
	int hours;
	int minutes;
	int seconds;
};

struct time split_time (long total_seconds);

int main( void )
{
	struct time a;
	int total_seconds = 57020;
	
	a = split_time(total_seconds);
	
	printf("%d in seconds\nIn our time %d:%d:%d", total_seconds, a.hours, a.minutes, a.seconds);

	return 0;
}

struct time split_time (long total_seconds)
{
	struct time a;
	
	a.hours = total_seconds / 3600;
	a.minutes = total_seconds / 60 % 60;
	a.seconds = total_seconds % 100;
	
	return a;
}

