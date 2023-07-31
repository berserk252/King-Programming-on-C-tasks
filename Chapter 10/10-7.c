#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {1, 1, 0, 0, 0, 0, 0}, 
								 {1, 0, 1, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
								 {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
								 {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0},
								 {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1},};
char digits[3][MAX_DIGITS * 4];
int position = 0;
int numbers[MAX_DIGITS] = {0};

void clear_digits_array(void);
void process_digit (void);
void print_digits_array(void);

int main( void )
{
	printf("Enter 's' to stop");
	
	while(getchar() != 's')
	{
		for(int i = 0; i != MAX_DIGITS; i++)
		{
			printf("Enter numbers: ");
			scanf("%d", &numbers[i]);
		}
		
		clear_digits_array();
		process_digit();
		print_digits_array();
	}
	
	return 0;
}

void clear_digits_array(void)
{
	for(int i = 0; i != 3; i++)
	{
		for(int y = 0; y != MAX_DIGITS * 4; y++)
		{
			digits[i][y] = ' ';
		}
	}
}

void process_digit(void)
{
	int counter = 0;
	
	for(int i = 0; i != MAX_DIGITS; i++)
	{
		switch(numbers[i])
		{
			case 0 :
				digits[1][position] = '|';
				digits[2][position] = '|';
				position++;
				digits[0][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;
				
			case 1 :
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;
				
			case 2 :
				digits[2][position] = '|';
				position++;
				digits[0][position] = '_';
				digits[1][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[1][position] = '|';
				position += 2;
				break;
				
			case 3 :
				digits[0][position] = '_';
				digits[1][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;	
			
			case 4 :
				digits[1][position] = '|';
				position++;
				digits[1][position] = '_';
				position++;
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;
				
			case 5 :
				digits[1][position] = '|';
				position++;
				digits[0][position] = '_';
				digits[1][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[2][position] = '|';
				position += 2;
				break;
				
					
			case 6 :
				digits[1][position] = '|';
				digits[2][position] = '|';
				position++;
				digits[0][position] = '_';
				digits[1][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[2][position] = '|';
				position += 2;
				break;
				
						
			case 7 :
				digits[0][position] = '_';
				position++;
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;
				
			case 8 :
				digits[1][position] = '|';
				digits[2][position] = '|';
				position++;
				digits[0][position] = '_';
				digits[1][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;
				
			case 9 :
				digits[1][position] = '|';
				position++;
				digits[0][position] = '_';
				digits[1][position] = '_';
				digits[2][position] = '_';
				position++;
				digits[1][position] = '|';
				digits[2][position] = '|';
				position += 2;
				break;		
		}
	}
}

void print_digits_array(void)
{
	for(int i = 0; i != 3; i++)
	{
		for(int y = 0; y != MAX_DIGITS * 4; y++)
		{
			printf("%c", digits[i][y]);
		}
		puts("");
	}
}
