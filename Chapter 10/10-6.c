#include <stdbool.h> /* C99 only */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define STACK_SIZE 100/* external variables */

int contents [STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push (int i);
int pop (void);
void stack_overflow(void);
bool check(char ch);

int main(void)
{
	char ch;
	int num1, num2, sum;

	while(1)
	{
		if(ch != '\n')
		{
			
			printf("Enter RPN numbers: ");
			scanf("%c", &ch);
			
			while(getchar() != '\n')
			{
				continue;
			}
			
			if(check(ch))
			{
				printf("The program ended\n");
				return 0;
			}
		
			switch(ch)
			{
				case '0' :
				case '1' :	
				case '2' :
				case '3' :
				case '4' :
				case '5' :
				case '6' :
				case '7' :
				case '8' :
				case '9' :
					push(ch - '0'); 
					break;		
			}
			
			num1 = contents[top - 2];
			num2 = contents[top - 1];
			
			switch(ch)
			{
				case '+' :
					sum = num1 + num2;
					pop();
					pop();
					push(sum);
					break;	
						
				case '-' :	
					sum = num1 - num2;
					pop();
					pop();
					push(sum);
					break;
							
				case '/' :
					sum = num1 / num2;
					pop();
					pop();
					push(sum);
					break;
						
				case '*' :
					sum = num1 * num2;
					pop();
					pop();
					push(sum);
					break;
			}
		
			if(ch == '=')
			{
				if(top != 1)
				{
					printf("YOU HAVE INCORRECTLY ENTERED OPERATORS OR OPERANDS\n");
				}
				else
				{
					printf("\nValue is %d\n", contents[top - 1]);
				}
				
				for(int i = 0; i != STACK_SIZE; i++)
				{
					contents[i] = 0;
				}
			}
		}
	}
	
	
	
	return 0;
}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}
bool is_full(void){
	return top == STACK_SIZE;
}

void push (int i){
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop (void){
	if (is_empty())
		;
	else
		return contents[--top];
}

bool check(char ch)
{
	switch(ch)
	{
		case '0' :
		case '1' :
		case '2' :
		case '3' :
		case '4' :	
		case '5' :		
		case '6' :	
		case '7' :			
		case '8' :	
		case '9' :	
		case '+' :	
		case '-' :	
		case '/' :
		case '*' :
		case '=' :
			return 0;
			break;										
		
		default:
			return 1;
	}
}

void stack_overflow(void)
{
	printf("Stack is full");
	for(int i = 0; i != STACK_SIZE; i++)
	{
		contents[i] = '\0';
	}
}
