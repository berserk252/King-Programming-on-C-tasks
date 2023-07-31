#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	char chess_board[8][8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
							  'p', 'p',	'p', 'p', 'p', 'p', 'p', 'p',
							     [2][1] = '*',    [2][3] =  '*',	 [2][5] =   '*',    [2][7] =   '*',
							  [3][0] = '*',    [3][2] =  '*',	[3][4] =  '*',    [3][6] =  '*',  
								 [4][1] = '*',    [4][3] =  '*',	 [4][5] =   '*',    [4][7] =   '*',
							  [5][0] = '*',    [5][2] =  '*',	[5][4] =  '*',    [5][6] =  '*',  ' ',
							  'P', 'P',	'P', 'P', 'P', 'P', 'P', 'P',
							  'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R',};

	for(int i = 0; i != 8; i++)
	{
		for(int y = 0; y != 8; y++)
		{
			printf("%c ", chess_board[i][y]);
		}
		puts("");
	}						   

	return 0;
}

