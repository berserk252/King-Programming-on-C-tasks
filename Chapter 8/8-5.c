#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	int fib_numbers[40] = {0, 1, 1};
	
	
	printf(" %-9d %-9d %-9d", fib_numbers[0], fib_numbers[1], fib_numbers[2]);
	
	for(int i = 2; i < 40; i++)
	{
		fib_numbers[i + 1] = fib_numbers[i] + fib_numbers[i - 1];
		printf(" %-9d", fib_numbers[i + 1]);
		
		if(i % 10 == 0)
		{
			puts("");
		}
	}
	return 0;
}

