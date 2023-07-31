#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define AVG (x, y) (x-y) / 2
#define AREA (x, y) (x) * (y)

int main( void )
{
	printf("%d\n%d\n", AVG(5, 5), AREA(5,));
	
	return 0;
}

