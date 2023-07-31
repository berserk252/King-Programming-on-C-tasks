#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	int temperature_readings[6][5] = {10, 15, 16, 11, 9, 12, 13, 15, 18, 15, 13, 7, 8, 9, 11, 10, 10, 11, 10, 11, 11, 12, 13, 12, 13, 13, 14, 15, 16, 17};
	int sum;
	
	for(int i = 0; i != 6; i++)
	{
		for(int y = 0; y != 5; y++)
		{
			sum += temperature_readings[i][y];
		}
	}
	
	sum /= 30;
	
	printf("%d ", sum);
	
	return 0;
}

