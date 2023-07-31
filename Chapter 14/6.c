#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define DISP(f , x) printf(#f " (%g) =%g \n", x, f(x));
#define DISP2(f , x, y) printf(#f " (%g) =%g \n" #f " (%g) =%g \n", x, f(x), y, f(y));
double sqrt(double x);
int main( void )
{
	DISP(sqrt, 3);
	DISP2(sqrt, 3, 4);
	return 0;
}

double sqrt(double x)
{
	return x * x;
}
