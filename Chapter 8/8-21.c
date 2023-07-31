#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

void cezar(char str[]);

int main( void )
{
	char str[80] = "Go ahead, make my day.";
	
	cezar(str);

	return 0;
}

void cezar(char str[])
{
	char chr;
	int y;
	int move;
	char alphabite[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char arr[80] = "";
	
	printf("Enter move:");
	scanf("%d", &move);
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		chr = str[i];
			
		if(!ispunct(chr) && chr != ' ')
		{
			for(y = 0; y != 26; y++)
			{
				if(toupper(chr) ==  alphabite[y])
				{
					break;
				}
			}
		
			if(isupper(chr))
			{
				if(y + move >= 25)
				{
					y = (y + move) % 26;
					
					arr[i] = alphabite[y];
				}
				else
				{
					arr[i] = alphabite[y] + move;
				}
			}
			else
			{
				if(y + move >= 25)
				{
					y = (y + move) % 26;
					
					arr[i] = tolower(alphabite[y]);
				}
				else
				{
					arr[i] = tolower(alphabite[y]) + move;
				}	
			}
		}
		else
		{
			arr[i] = chr;
		}
	}
	
	
	printf("\n%s\n", arr);
}
