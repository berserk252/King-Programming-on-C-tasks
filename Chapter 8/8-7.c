#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1}, {1, 1}, 
								 {1, [2] = 1, 1, 1,[6] =  1}, {1, 1, 1, 1, [6] = 1},
								 {[1] = 1, 1, [5] = 1, 1}, {1, [2] = 1, 1, [5] = 1, 1},
								 {1, [2] = 1, 1, 1, 1, 1}, {1, 1, 1},
								 {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, [5] = 1, 1},};

	return 0;
}

