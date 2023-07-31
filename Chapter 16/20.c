#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

enum {NORTH, SOUTH, EAST, WEST}direction;

int main( void )
{
	enum direction;
	int x,y;
	
	switch(direction)
	{
		case NORTH : 
			y--;
			break;
		
		case SOUTH : 
			y++;
			break;
			
		case EAST : 
			x++;
			break;
			
		case WEST : 
			x--;
			break;	
	}
	
	return 0;
}

