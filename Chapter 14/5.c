#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define TOUPPER(c) ('a'<=(c) &&(c) <='z'? ((c) - 'a')+'A' : (c))

int main( void )
{
	int i = 0;
	char s[10];
	
	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i]));
	
	puts("");
	strcpy(s,"0123");
	i = 0;
	putchar(TOUPPER(s[++i]));
	
	return 0;
}

