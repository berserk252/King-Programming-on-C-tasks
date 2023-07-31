#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void B1FF(char *s);

int main( void )
{
	char s[100] = {"Hey dude, C is rilly cool"};
	
	B1FF(s);
	
	return 0;
}

void B1FF(char *s)
{
	for(int i = 0; s[i] != '\0'; i++)
	{
		switch(toupper(s[i]))
		{
			case 'A' :
				printf("4");
				break;
			
			case 'B' :
				printf("8");
				break;	
				
			case 'E' :
				printf("3");
				break;
			
			case 'I' :
				printf("1");
				break;	
			
			case 'O' :
				printf("0");
				break;
			
			case 'S' :
				printf("5");
				break;
				
			default :
				printf("%c", toupper(s[i]));
				break;			
		}
	}
	
	printf("!!!!!!!!!!!!\n");
}

