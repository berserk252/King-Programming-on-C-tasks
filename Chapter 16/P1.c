#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct dialing_code {
	char *country;
	int code;
};

int main( void )
{
	struct dialing_code country_codes[32] =
	{{"Argentina", 54}, {"Bangladesh",880},
	{"Brazil", 55}, {"Bunna (Myanmar)", 95},
	{"China",56}, {"Colombia", 57},
	{"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
	{"Ethiopia", 251}, {"France",33},
	{"Germany", 49}, {"India", 91},
	{"Indonesia", 62}, {"Iran", 95},
	{"Italy",39}, {"Japan", 51},
	{"Mexico",52}, {"Nigeria", 234},
	{"Pakistan", 92}, {"Philippines", 63},
	{"Poland", 45}, {"Russia", 7},
	{"South Africa", 27}, {"South Korea", 52},
	{"Spain 34"}, {"Sudan",249},
	{"Thailand", 66}, {"Turkey", 90},
	{"Ukraine", 330}, {"United Kingdom", 44},
	{"United States", 1}, {"Vietnam", 54}};
	int num;
	
	printf("Enter country code:");
	scanf("%d", &num);
	
	for(int count = 0; count != 31; count++)
	{
		if(country_codes[count].code == num)
		{
			printf("%d is %s", country_codes[count].code, country_codes[count].country);
			return 0;
		}
	}
	
	printf("The code is worng or we isnt have code on our list\n");
	
	return 0;
}

