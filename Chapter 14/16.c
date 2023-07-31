#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main( void )
{
	
	printf("%s", IDENT());
	
	#pragma ident x
	return 0;
}

