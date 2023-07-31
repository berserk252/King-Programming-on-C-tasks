#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);


int main( void )
{
	unsigned int i = 0x12345678;
	int n = 4;
	
	rotate_left(i,n);
	
	rotate_right(i, n);
	
	
	return 0;
}

unsigned int rotate_left(unsigned int i, int n)
{
	unsigned int MASK = 1;
	MASK <<= 31;
	
	for(int a = 1; a <= n; a++)
	{
		if((MASK & i) == MASK)
		{
			i <<= 1;
			i |= 1;
			continue;
		}
		
		i <<= 1;
	}
	
	printf("left = 0x%x\n", i);
}

unsigned int rotate_right(unsigned int i, int n)
{
	unsigned int MASK = 1;
	MASK <<= 31;
	
	for(int a = 1; a <= n; a++)
	{
		if((1 & i) == 1)
		{
			i >>= 1;
			i |= MASK;
			continue;
		}
		
		i >>= 1;
	}
	
	printf("right = 0x%x\n", i);
}
