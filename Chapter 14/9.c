#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
#define CHECK(x,y,n) x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1 ? 1 : 0
#define MEDIAN(x,y,z) (x + y + z) / 3
#define POLYNOMIAL(i) (3 * (i * i * i * i * i )) + (2 * (i * i * i * i )) - (5 * (i * i * i  )) - (i * i) + (7 * i) - 6
int main( void )
{

	int a = CHECK(5, 7, 2);
	float b = MEDIAN(5, 4, 5);
	double c = POLYNOMIAL(2);
	printf("%d %.2f, %.2f", a, b, c);
	
	return 0;
}

