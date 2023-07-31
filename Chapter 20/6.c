#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

unsigned short swap_bytes (unsigned short i);

int main( void )
{
	unsigned short i;
	
	printf("Enter number in 16 format: ");
	scanf("%hx", &i);
	
	i = swap_bytes(i);
	
	printf("New result is %hx", i);
	
	
	return 0;
}

unsigned short swap_bytes (unsigned short i)
{

	i = (i & 255) << 8 | (i >> 8);
	
	return i;
}

