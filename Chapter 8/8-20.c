#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int reverse(char arr[], char *ptr); 

int main( void )
{
	char arr[] = "you can cage a swallow can't you?";
	char *ptr;
	int len = strlen(arr);
	char c = arr[len - 1];
	
	ptr = strtok(arr, " ");
	
	reverse(arr, ptr);
	
	printf("%s", ptr);
	
	printf("%c ", c);
	
	return 0;
}


int reverse(char arr[], char *ptr)
{
	ptr = strtok(NULL, " ?.");
	
	if(ptr == '\0')
	{
		return 0;
	}
	else
	{
		reverse(arr, ptr);
	}
	
	printf("%s ", ptr);
	
	
}
