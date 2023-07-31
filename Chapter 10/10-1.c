#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> /* C99 only */
#define STACK_SIZE 100/* external variables */

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push (char i);
int pop (void);
void stack_overflow(void);
void stack_underflow(void);

char contents [STACK_SIZE];
int top = 0;

int main( void )
{
	char arr[STACK_SIZE];
	printf("Enter <<() or {}>> :");
	
	scanf("%s", arr);

	for(int counter = 0;arr[counter] != '\0'; counter++)
	{
		if(arr[counter] == '(' || arr[counter]  == '{')
		{
			push(arr[counter] );
		}
		
		if(arr[counter]  == ')' || arr[counter]  == '}')
		{
			pop();
		}
		
		if(arr[counter] != '(' && arr[counter]  != '{' && arr[counter]  != ')' && arr[counter]  != '}')
		{
			puts("You enter incorrect number");
			return 0;
		}	
	}
	
	if(is_empty())
	{
		printf("Parentheses and curly braces are nested correctly.\n");
	}
	else
	{
		printf("Parentheses and curly braces arn't nested correctly.\n");
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

void push (char i){
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop (void){
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void)
{
	puts("stack is full");
}

void stack_underflow(void)
{
	puts("stack is empty");
}
