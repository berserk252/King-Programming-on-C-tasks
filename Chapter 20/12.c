#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

unsigned short create_short(unsigned char high_byte,unsigned char low_byte);

int main( void )
{
	unsigned char high_byte = 'A', low_byte = 'B';
	unsigned short a;
	
	a = create_short(high_byte, low_byte);
	
	printf("%u", a);
	
	return 0;
}

unsigned short create_short(unsigned char high_byte,unsigned char low_byte){
	
	return (high_byte << 8) + low_byte;
}
