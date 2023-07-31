#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void labir(char arr[][10]);
void print(char arr[][10]);

int main( void )
{
	char arr[10][10] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
						{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};
						
	labir(arr);
	print(arr);

	return 0;
}

void labir(char arr[][10])
{
	int symb = 65, string = 0, column = 0, side, flag = 0;
	
	srand(time(NULL));
	
	arr[string][column] = symb;
	symb++;
	
	for(;symb <= 90;)
	{
		side = 1 + rand() % 5;
		
		switch(side)
		{
			case 1 :
				if(arr[string][column - 1] == '.' && column - 1 >= 0)
				{
					arr[string][column -= 1] = symb;
					symb++;
				}
				else
				{
					if(arr[string][column - 1] != '.' && arr[string][column + 1] != '.' && arr[string - 1][column] != '.' && arr[string + 1][column] != '.' )
					{
						flag++;
					}
				}
				break;
				
			case 2 :
				if(arr[string - 1][column] == '.' && string - 1 >= 0)
				{
					arr[string -= 1][column] = symb;
					symb++;
				}
				else
				{
					if(arr[string][column - 1] != '.' && arr[string][column + 1] != '.' && arr[string - 1][column] != '.' && arr[string + 1][column] != '.' )
					{
						flag++;
					}
				}	
				break;
				
			case 3 :
				if(arr[string][column + 1] == '.' && column + 1 <= 10)
				{
					arr[string][column += 1] = symb;
					symb++;
				}
				else
				{
					if(arr[string][column - 1] != '.' && arr[string][column + 1] != '.' && arr[string - 1][column] != '.' && arr[string + 1][column] != '.' )
					{
						flag++;
					}
				}	
				break;		
				
			case 4 :
				if(arr[string + 1][column] == '.' && string + 1 <= 10)
				{
					arr[string += 1][column] = symb;
					symb++;
				}
				else
				{
					if(arr[string][column - 1] != '.' && arr[string][column + 1] != '.' && arr[string - 1][column] != '.' && arr[string + 1][column] != '.' )
					{
						flag++;
					}
				}	
				break;	
		}
		
	
		
		if(flag == 1)
		{
			break;
		}
	}	
}

void print(char arr[][10])
{
	for(int i = 0; i != 10; i++)
	{
		for(int y = 0; y != 10; y++)
		{
			printf("%c ", arr[i][y]);
		}
		puts("");
	}
}
