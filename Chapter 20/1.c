#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	unsigned short i = 8, j = 9, k;
	
	printf("%d\n", i >> 1 + j >> 1);
	
	i = 1;
	
	printf("%d\n", i & ~i);
	
	i=2;
	j=1;
	k=9;
	
	printf("%d\n", ~i & j ^ k);
	
	i=7;
	j=8 ;
	k= 9;
	
	printf("%d\n", i ^ j & k);
	
	
	
	return 0;
}

