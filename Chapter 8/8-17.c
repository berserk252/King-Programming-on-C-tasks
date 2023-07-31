#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void sums(int arr[][5]);

int main( void )
{
	int arr[5][5] = {{8, 3, 9, 0, 10},
					 {3, 5, 17, 1, 1},
					 {2, 8, 6, 23, 1},
					 {15, 7, 3, 2, 9},
					 {6, 14, 2, 6, 0}};
					 
	sums(arr);
					 
	return 0;
}

void sums(int arr[][5])
{
	int sum[5] = {0}, i;
	
	printf("Strings: ");
	
	for(i = 0; i != 5; i++)
	{
		for(int y = 0; y != 5; y++)
		{
			sum[i] += arr[i][y];
		}
	}
	
	for(i = 0; i != 5; i++)
	{
		printf("%d ", sum[i]);
	}
	
	for(i = 0; i != 5; i++)
	{
		sum[i] = 0;
	}
	
	printf("\nColumns: ");
	
	for(i = 0; i != 5; i++)
	{
		for(int y = 0; y != 5; y++)
		{
			sum[i] += arr[y][i];
		}
	}
	
	for(i = 0; i != 5; i++)
	{
		printf("%d ", sum[i]);
	}
	
	puts("");
}
