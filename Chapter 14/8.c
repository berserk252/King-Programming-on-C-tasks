#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define LINE_FILE "Line " "of file" 

int main( void )
{
	const char str[] = LINE_FILE;
	
	printf("%s", str);
	
	return 0;
}

