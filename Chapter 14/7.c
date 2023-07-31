#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define GENERIC_MAX(type) \
	type type##_max(type x,type y) \
	{ \
		return x > y ? x : y; \
	}

int a(void);
int main( void )
{
	
	printf("%d", a());
	
	return 0;
}

int a(void)
{
	GENERIC_MAX(unsigned long);
}
