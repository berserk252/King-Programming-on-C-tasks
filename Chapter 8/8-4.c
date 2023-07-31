#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

int main( void )
{
	bool weekend[7] = {[0] = 1, [6] = 1};
	
	printf("%d %d %d %d %d %d %d", weekend[0], weekend[1], weekend[2], weekend[3], weekend[4], weekend[5], weekend[6]);
	
	
	return 0;
}

