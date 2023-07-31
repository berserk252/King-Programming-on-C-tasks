#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

unsigned int reverse_bits(unsigned int n);

int main( void )
{
	unsigned int n = 14;
	
	printf("a %u\n", reverse_bits(n));
	
	return 0;
}

unsigned int reverse_bits(unsigned int n)
{
	unsigned int x = 0, MASK = 1 << 31, fold;
	
	
	for(int i = 0; i < 32; i++)
	{		
		if((n & MASK) == MASK)
		{
			x |= 1 << i;
		}
		n <<= 1;
	}
	
	while((x & 1) != 1)
	{
		x >>= 1;
	}
	
	return x;
}

