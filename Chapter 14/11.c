#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define ERROR(x, y) fprintf (stderr, x,y);

int main( void )
{
	int index = 5;
	ERROR("Range error: index = %d\n", index);
	
	return 0;
}

