#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct color 
{
	int red;
	int green;
	int blue;
};

int main( void )
{
	struct color const MAGNETA = {
		.red = 255,
		.green = 0,
		.blue = 255
	};

	return 0;
}

