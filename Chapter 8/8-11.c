#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	char checkers_board[8][8];
	
	for(int i = 0; i != 8; i++)
	{
		for(int y = 0; y != 8; y++)
		{
			if((i + y) % 2 == 0)
			{
				checkers_board[i][y] = 'B';
			}
			else
			{
				checkers_board[i][y] = 'R';
			}
		}
	}
	
	for(int i = 0; i != 8; i++)
	{
		for(int y = 0; y != 8; y++)
		{
			printf("%c ", checkers_board[i][y]);
		}
		puts("");
	}
	
	return 0;
}

