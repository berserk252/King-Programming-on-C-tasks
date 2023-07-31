#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

union {
	
	float num;
	
	struct  {
		unsigned int mantiss : 23;
		unsigned int concise_degree : 8;
		unsigned int sign : 1;
	}floating_p;
}a;

int main( void )
{
	union a;
	
	a.floating_p.sign = 1;
	a.floating_p.concise_degree = 128;
	a.floating_p.mantiss = 0;
	
	
	printf("%f\n", a.num);
	return 0;
}

