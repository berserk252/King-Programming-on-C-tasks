#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define SHIFT_BIT 1
#define CTRL_BIT 2
#define ALT_BIT 4

int main( void )
{
	
	int key_code = 4;
	
	if (key_code ^ (SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0)
	{
		printf("The modification symbols is turn of");
	}
	return 0;
}

