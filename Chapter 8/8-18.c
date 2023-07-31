#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void sums(int arr[][5]);

int main( void )
{
	int arr[5][5] = {{8, 3, 9, 0, 10},
					 {3, 5, 9, 1, 1},
					 {2, 8, 6, 5, 1},
					 {4, 7, 3, 2, 9},
					 {6, 6, 2, 6, 0}};
					 
	sums(arr);
					 
	return 0;
}

void sums(int arr[][5])
{
	int sum[5] = {0}, i, max, min;
	
	for(i = 0; i != 5; i++)
	{
		for(int y = 0; y != 5; y++)
		{
			sum[i] += arr[i][y];
		}
	}
	
	for(i = 0; i != 5; i++)
	{
		printf("%d student:\nAll sum is: %d\nAverage is: %.1f\n", i + 1, sum[i], (float)sum[i] / 5);
	}
	
	max = arr[0][0];
	min = arr[0][0];
	
	printf("_________________________________________________\n");
	
	for(i = 0; i != 5; i++)
	{
		printf("%d exam\nThe biggest grade is: ", i + 1);
		
		for(int y = 0; y != 5; y++)	
		{
			if(arr[y][i] > max)
			{
				max = arr[y][i];
			}
		}
		
		printf("%d\n The smallest grade is: ", max);
		
		for(int y = 0; y != 5; y++)	
		{
			if(arr[y][i] < min)
			{
				min = arr[y][i];
			}
		}
		
		printf("%d\n__________________________________________________\n", min);
		
		max = 0;
	}	
	puts("");
}
