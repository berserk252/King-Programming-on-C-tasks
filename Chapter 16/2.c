#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct f{
	double a;
	double b;
}c1 = {0.0, 1.0},c2 = {1.0, 0.0},c3;

int main( void )
{
	struct f c1, c2, c3;
	
	c1 = c2;
	
	c3.a = c1.a + c2.a;
	c3.b = c1.b + c2.b;
	
	
	return 0;
}

