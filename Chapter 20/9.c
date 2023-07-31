#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int count_ones (unsigned char ch);

int main( void )
{
	
	unsigned char ch = '0';
	
	
	int x = count_ones(ch);
	
	printf("%d ", x);
	
	return 0;
}

int count_ones (unsigned char ch)
{
	int count = 0;
	/*for(int i = 0; i < 8; i++)
	{
		if((ch & 1) == 1)
		{
			count++;
		}
		
			ch >>= 1;
		
	}*/
	
	count = (ch & 1) + ((ch >> 1) & 1) + ((ch >> 2) & 1) + ((ch >> 3) & 1) + ((ch >> 4) & 1) + ((ch >> 5) & 1) + ((ch >> 6) & 1) + ((ch >> 7) & 1);
	
	return count;
	
}
