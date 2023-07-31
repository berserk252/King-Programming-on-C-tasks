#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

#define ENG 1

int main( void )
{
	#ifdef ENG
		printf("Insert Disk 1 (if ENGLISH is defined)\n");
	#endif
	#ifdef FRENCH	
		printf("Inserez Le Disque 1 (if FRENCH is defined)\n");
		#endif
	#ifdef SPAN
		printf("Inserte E1 Disco 1 (if SPANISH is defined)\n");	
		#endif
	
	return 0;
}

