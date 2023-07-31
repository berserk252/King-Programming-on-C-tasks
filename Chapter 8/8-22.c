#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int main( void )
{
	char word1[] = "dumbest";
	char word2[] = "stumble", chr;
	char alphabite[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int symbC[26] = {0}, y, counter = 0;
	
	printf("The first word is %s\n", word1);
	printf("The second word is %s\n", word2);
	
	for(int i = 0; word1[i] != '\0'; i++)
	{
		chr = word1[i];
		
		for(y = 0; y != 26; y++)
		{
			if(toupper(chr) ==  alphabite[y])
			{
				break;
			}
		}
		
		symbC[y]++;
	}
	
	
	
	
	
	for(int i = 0; word2[i] != '\0'; i++)
	{
		chr = word2[i];
		
		for(y = 0; y != 26; y++)
		{
			if(toupper(chr) ==  alphabite[y])
			{
				break;
			}
		}
		
		symbC[y]--;
	}
	
	for(int i = 0; i != 26; i++)
	{
		if(symbC[i] == 0)
		{
			counter++;
		}
	}
	
	if(counter == 26)
	{
		printf("The words is anagram\n");
	}
	else
	{
		printf("The words isn't anagram\n");
	}
	
	return 0;
}

